#include<bits/stdc++.h>
using namespace std;

void generateParenthesis(int open,int close,string op,int max){
   if(op.size()==2*max){
       cout<<op<<"\n";
       return;
   }
   if(open>0){
       generateParenthesis(open-1,close,op+"(",max);
   }
   if(close>open){
        generateParenthesis(open,close-1,op+")",max);
   }
    
}

void generate(int n){
    int open =n,close=n;
    string op="";
    generateParenthesis(n,n,op,n);
}

int main(){
    int n=2;
    generate(n);
}