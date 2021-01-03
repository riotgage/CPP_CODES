#include<bits/stdc++.h>
using namespace std;
void getPerm(string ip,string op){
    if(ip==""){
        cout<<op<<"\n";
        return;
    }
    for(int i=0;i<ip.size();i++){
        string newip=ip.substr(0,i);
        if(i+1<ip.size())newip+=ip.substr(i+1);
        getPerm(newip,op+ip[i]);
    }
}
int main(){
    string ip="ABC";
    string op="";
    getPerm(ip,op);
}