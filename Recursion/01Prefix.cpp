/*

Given a positive integer N,the task is to find all the N bit binary numbers 
having more than or equal 1’s than 0’s for any prefix of the number. 

https://practice.geeksforgeeks.org/problems/print-n-bit-binary-numbers-having-more-1s-than-0s0252/1

*/

#include<bits/stdc++.h>
using namespace std;

void generate(int n,int zero,int one,string op){

    if(n==0){
        cout<<op<<"\n";
        return;
    }
generate(n-1,zero,one+1,op+"1");
    if(one>zero){
        generate(n-1,zero+1,one,op+"0");
    }
    
}

int main(){
    int n;
    cin>>n;
    generate(n,0,0,"");
}