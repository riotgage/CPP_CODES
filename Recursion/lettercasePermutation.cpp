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
    if(ip.size()>1)
            ip=ip.substr(1);
        else ip=" ";
    if(isalpha(c)){
        op2+=tolower(c);
        op1+=toupper(c);   
        
        generateSubsets(ip,op2);    
        generateSubsets(ip,op1);  
    }
    else{
        generateSubsets(ip,op+c);    
    }
    
}
void generate(string s){
    string op="";
    generateSubsets(s,op);
}
int main(){
    string s="ab2C";
    generate(s);
}