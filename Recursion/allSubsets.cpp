// Guven A string "abc" print all its subsets.

#include<iostream>
using namespace std;
void generateSubsets(string ip,string op){
    if(ip==" "){            // Base Condition
        //if(op.size()==2)        // when subset of size 2 is to be printed
            cout<<op<<"\n";
        return;
    }
    char c=ip[0];
    
    if(ip.size()>1)             // decreasing Input 
        ip=ip.substr(1);
    else ip=" ";
    
    generateSubsets(ip,op+c);  // Take the char
    generateSubsets(ip,op);     // Ignore the char
}
void generate(string s){
    string op="";
    generateSubsets(s,op);
}
int main(){
    string s="abc";
    generate(s);
}