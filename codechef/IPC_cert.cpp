#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int t,q;
    vector<int>ques(n,0),sum(n,0);
    int count=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<k;j++){
            cin>>t;
        
            sum+=t;
        }
        cin>>q;
        if(sum>=m && q<=10)count++;
    }
    cout<<count;

}