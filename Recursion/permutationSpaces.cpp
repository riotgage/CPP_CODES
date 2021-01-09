// Given A string "abc" print all its subsets . Subset can containe spaces
// Ans : a,b,c,ab,ac,bc,abc,"",a_bc,ab_c,a_b_c

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
    if(op!="")
        generateSubsets(ip,op+"_"+c);  // Take the char
    generateSubsets(ip,op+c);
    //generateSubsets(ip,op);     // Ignore the char
}
void generate(string s){
    string op="";
    generateSubsets(s,op);
}
int main(){
    string s="abc";
    generate(s);
}