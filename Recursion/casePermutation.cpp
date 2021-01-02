#include<iostream>
using namespace std;
void generateSubsets(string ip,string op){
    if(ip==" "){
        cout<<op<<"\n";
        return;
    }
    string op1=op;
    string op2=op;
    char c=ip[0];
    op2+=c;
    op1+=toupper(c);
    
    if(ip.size()>1)
        ip=ip.substr(1);
    else ip=" ";
    
    generateSubsets(ip,op1);  
    generateSubsets(ip,op);  
    generateSubsets(ip,op2);
}
void generate(string s){
    string op="";
    generateSubsets(s,op);
}
int main(){
    string s="ab";
    generate(s);
}