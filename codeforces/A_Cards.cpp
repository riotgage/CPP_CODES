#include<iostream>
using namespace std;
int main(){
    int l;
    cin>>l;
    string str;
    cin>>str;
    int n=0,z=0;
    for(char c:str){
        if(c=='n')n++;
        if(c=='z')z++;
    }

    for(int i=0;i<n;i++){
        cout<<"1 ";
    }
    for(int i=0;i<z;i++){
        cout<<"0 ";
    }
}