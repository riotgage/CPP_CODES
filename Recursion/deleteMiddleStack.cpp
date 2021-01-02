// Given a stack delete its middle element

#include<bits/stdc++.h>
using namespace std;
void reverseStack(stack<int>&s,int k){
    if(k==0){
        s.pop();
        return;
    }
    int top=s.top();
    s.pop();
    reverseStack(s,k-1);
    s.push(top);
    return;
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(3);
    s.push(54);
    s.push(43);
    s.push(12);
    s.push(76);
    s.push(7);
    reverseStack(s,s.size()/2);
    while(!s.empty()){
        cout<<s.top()<<"\n";
        s.pop();
    }
}