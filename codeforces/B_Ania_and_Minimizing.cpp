#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int num;
    string s;
    cin>>s;    
    int len=s.length();
    if(len==1){
        if(k==1){
            s[0]='0';
        }
    }
    else{
        if(k!=0 && s[0]>'1'){
            s[0]='1';
            k--;
        }
        for(int i=1;i<len && k>0;i++){
            if(s[i]!='0'){
                s[i]='0';
                k--;
            }
        }
    }
    
    cout<<s;

}