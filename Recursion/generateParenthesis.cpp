#include<bits/stdc++.h>
using namespace std;

void generateParemthesis(int open,int close,string op,int max){
   if(op.size()==2*max){
       cout<<op<<"\n";
       return;
   }
   if(open>0){
       generateParemthesis(open-1,close,op+"(",max);
   }
   if(close>open){
        generateParemthesis(open,close-1,op+")",max);
   }

    
}

void generate(int n){
    stack<char>sta;
    int open =n,close=n;
    string op="";
    generateParemthesis(n,n,op,n);
}


int main(){
    int n=5;
    generate(n);
}