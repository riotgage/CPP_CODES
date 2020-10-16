#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    while(cin>>t){
        stack<long long int>s;
        if(t==0){
            cout<<0;
        }
        while(t>0){
            s.push(t%9);
            t=t/9;
        }
        while(!s.empty()){
            cout<<s.top();
            s.pop();
        }
        cout<<"\n";
    }
}