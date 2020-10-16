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
    if(isalpha(c)){
        op2+=tolower(c);
        op1+=toupper(c);   
        if(ip.size()>1)
            ip=ip.substr(1);
        else ip=" ";
                generateSubsets(ip,op2);    

        generateSubsets(ip,op1);  
    }
    else{
        op2+=c;
        if(ip.size()>1)
            ip=ip.substr(1);
        else ip=" ";
        generateSubsets(ip,op2);    
    }
    
}
void generate(string s){
    string op="";
    generateSubsets(s,op);
}
int main(){
    string s="a1b2C";
    generate(s);
}