#include<iostream>
using namespace std;
int main(){
    int input;
    cin>>input;
    while(input--){
        int ch;
        cin>>ch;
        string str;
        cin>>str;
        int len=str.size();
    
        for(int i=0;i<len-1;i=i+2){
            ch=str[i];
            str[i]=str[i+1];
            str[i+1]=ch;   
        }
        for(int i=0;i<len;i=i+1){
            str[i]='a'+'z'-str[i]; 
        }
        cout<<str<<endl;
    }
    
}

