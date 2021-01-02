// Given a stack deleta, reverse it

#include<bits/stdc++.h>
using namespace std;

void insert(stack<int>&s,int elem){
    if(s.size()==0){
        s.push(elem);
        return;
    }
    int top=s.top();
    s.pop();
    insert(s,elem);
    s.push(top);
    return;
}

void reverseStack(stack<int>&s){
    if(s.size()<2){
        return;
    }
    int top=s.top();
    s.pop();
    reverseStack(s);
    insert(s,top);
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
    reverseStack(s);
    while(!s.empty()){
        cout<<s.top()<<"\n";
        s.pop();
    }
}