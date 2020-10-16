#include<iostream>
using namespace std;
int add(int a,int b){return a+b;}

int sub(int a,int b){return a-b;}
typedef int(*ptr)(int i,int j);


int main(){
    int c;
    ptr funptr;
    cin>>c;
    if(c==1){
        funptr=add;
        cout<<funptr(10,5);
    }
    else{
        funptr=sub;
        cout<<funptr(10,5);
    }

}