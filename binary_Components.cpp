#include<bits/stdc++.h>
#define lli long long int
using namespace std;
lli fact[1000001];
#define mod 1000000007
lli power(lli a,lli b){
    lli res=1;
    while(b){
        if(b%2){
            res=(res*a)%mod;
            b--;
        }
        a=(a*a)%mod;
        b/=2;
    }
    return res;
}

lli C(lli n,lli k){
    if(k>n)return 0;
    lli res=fact[n];
    //using fermats little theorem because question specifies mod 10^9+7 which is prime
    res=(res*power(fact[k],mod-2))%mod;
    res=(res*power(fact[n-k],mod-2))%mod;

    return res;
}

int main(){
    fact[0]=1;
    for(lli i=1;i<1000001;i++){
        fact[i]=(fact[i-1]*i)%mod;
    }
    int test;
    cin>>test;
    while(test--){
        lli n,k;
        cin>>n>>k;
        cout<<C(n,k);
    }    

}