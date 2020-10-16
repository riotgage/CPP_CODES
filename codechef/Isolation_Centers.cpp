#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int n,q;
        string s;
        cin>>n>>q;
        cin>>s;
        map<char,int>m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        int query;
        int sum;
        for(int i=0;i<q;i++){
            sum=0;
            cin>>query;
            for(auto j:m){
                int n=j.second-query;
                if(n<0){
                    n=0;
                }
                sum+=n;
            }
            cout<<sum<<"\n";

        }
    }
}