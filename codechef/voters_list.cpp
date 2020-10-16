#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    long long int n1,n2,n3,n,x;
    map<long long int,long long int>m;
    set<long long int>s;
    cin>>n1>>n2>>n3;
    n=n1+n2+n3;
    for(int i=0;i<n;i++){
        cin>>x;
        m[x]++;
        if(m[x]>1){
            s.insert(x);
        }
    }
    cout<<s.size()<<endl;
    for(long long int i:s){
        cout<<i<<endl;
    }
}