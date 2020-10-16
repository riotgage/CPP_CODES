#include<bits/stdc++.h>
using namespace std;
void sorting(stack<int>&s){
    if(s.empty())return;

    int top=s.top();
    s.pop();
    sorting(s);
    stack<int>s2;
    while(!s.empty()&&s.top()>top){
        s2.push(s.top());
        s.pop();
    }
    s.push(top);
    while(!s2.empty()){
        s.push(s2.top());
        s2.pop();
    }
    return;
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(3);
    s.push(54);
    s.push(43);
    s.push(76);
    s.push(7);
    sorting(s);
    while(!s.empty()){
        cout<<s.top()<<"\n";
        s.pop();
    }
}