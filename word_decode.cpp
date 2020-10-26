/*
Given the mapping a = 1, b = 2, ... z = 26, and an encoded message, count the number of ways it can be decoded.

For example, the message '111' would give 3, since it could be decoded as 'aaa', 'ka', and 'ak'.
*/
#include<bits/stdc++.h>
using namespace std;
set<string>ans;
map<int,char>mapping;
void decode(string ip,string op){
    if(ip==""){
        ans.insert(op);
        return;
    }
    op+=mapping[ip[0]-'0'];
    decode(ip.substr(1),op);
    if(ip.size()>1){
        op+
    }
} 
int main(){
    string s;
    cin>>s;
    for(int i=0;i<26;i++){
        mapping.insert({i+1,'a'+i});
    }

}
