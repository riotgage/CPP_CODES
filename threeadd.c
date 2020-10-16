#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void pm();
void plus();
void divide();
int i,ch,j,l,addr=100;
char ex[10],  ex[10] , ex1[10], ex2[10],id1[5],op[5],id2[5];

char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}
void main()
{
 
while(1)
{
printf("\n1.assignment\n2.arithmetic\n3.relational\n4.Exit\nEnter the choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\nEnter the  exression with assignment operator:");
scanf("%s", ex);
l=strlen( ex);
 ex2[0]='\0';
i=0;
while( ex[i]!='=')
{
i++;
}
strncat( ex2, ex,i);
strrev( ex);
 ex1[0]='\0';
strncat( ex1, ex,l-(i+1));
strrev( ex1);
printf("Three address code:\ntemp=%s\n%s=temp\n", ex1, ex2);
break;

case 2:
printf("\nEnter the  exression with arithmetic operator:");
scanf("%s",ex);
strcpy( ex,ex);
l=strlen( ex);
 ex1[0]='\0';

for(i=0;i<l;i++)
{
if( ex[i]=='+'|| ex[i]=='-')
{
if( ex[i+2]=='/'|| ex[i+2]=='*')
{
pm();
break;
}
else
{
plus();
break;
}
}
else if( ex[i]=='/'|| ex[i]=='*')
{
divide();
break;
}
}
break;

case 3:
printf("Enter the  exression with relational operator");
scanf("%s%s%s",&id1,&op,&id2);
if(((strcmp(op,"<")==0)||(strcmp(op,">")==0)||(strcmp(op,"<=")==0)||(strcmp(op,">=")==0)||(strcmp(op,"==")==0)||(strcmp(op,"!=")==0))==0)
printf(" exression is error");
else
{
printf("\n%d\tif %s%s%s goto %d",addr,id1,op,id2,addr+3);
addr++;
printf("\n%d\t T:=0",addr);
addr++;
printf("\n%d\t goto %d",addr,addr+2);
addr++;
printf("\n%d\t T:=1",addr);
}
break;
case 4:
exit(0);
}
}
}
void pm()
{
strrev( ex);
j=l-i-1;
strncat( ex1, ex,j);
strrev( ex1);
printf("Three address code:\ntemp=%s\ntemp1=%c%ctemp\n", ex1, ex[j+1], ex[j]);
}
void divide()
{
strncat( ex1, ex,i+2);
printf("Three address code:\ntemp=%s\ntemp1=temp%c%c\n", ex1, ex[i+2], ex[i+3]);
}
void plus()
{
strncat( ex1, ex,i+2);
printf("Three address code:\ntemp=%s\ntemp1=temp%c%c\n", ex1, ex[i+2], ex[i+3]);
}