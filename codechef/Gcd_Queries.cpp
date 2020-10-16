#include<bits/stdc++.h>
using namespace std;
int pre[100005],suff[100005];
int ar[100001];
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,q,l,r;
        cin>>n>>q;
        vector<int>arr(n+1);
        for(int i=1;i<n+1;i++){
            cin>>arr[i];
        }
        pre[0]=0;
        suff[n+1]=0;
        for(int i=1;i<=n;i++){
            pre[i]=gcd(pre[i-1],arr[i]);
        }
        for(int i=n;i>0;i--){
            suff[i]=gcd(suff[i+1],arr[i]);
        }

        while(q--){
            cin>>l>>r;
            cout<<gcd(pre[l-1],suff[r+1])<<"\n";
        }
    }
}