#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int small=0,capital=0;
    for(int i=0;i<s.size();i++){
        if(s[i]<'a'){
            capital++;
        }
        else{
            small++;
        }
    }
    if(small>=capital){
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }
    else{
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }
    cout<<s;
}