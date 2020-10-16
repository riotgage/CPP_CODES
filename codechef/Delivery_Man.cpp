#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool compare(const pair<int,int>&a,const pair<int,int>&b){
    return a.second>b.second;
}
int main(){
    int n,x,y;
    cin>>n>>x>>y;
    vector<int>a(n,0);
    vector<int>b(n,0);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<pair<int,int>>pairs;
    for(int i=0;i<n;i++){
        pairs.push_back({i,abs(a[i]-b[i])});        //Greddy Approach , parameter is absolute difference between tips
    }
    sort(pairs.begin(),pairs.end(),compare);
    int sum=0;
    int i;
    for(int j=0;j<n;j++){
        i=pairs[j].first;
        if(a[i]>b[i]){
            if(x!=0){
                sum+=a[i];
                x--;
            }
            else{
                sum+=b[i];
                y--;
            }
        }
        else{
            if(y!=0){
                sum+=b[i];
                y--;
            }
            else{
                sum+=a[i];
                x--;
            }
        }
    }
    cout<<sum<<"\n";
    return 0;
}