#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define mod 1000000007
lli power(lli a ,lli n,lli d){
    lli res=1;
    while(n>0){
        if(n%2){
            res=((res%d)*(a%d))%d;
            n--;
        }
        else{
            a=((a%d)*(a%d))%d;
            n/=2;
        }
    }
    return res;

}

lli gcd(lli a,lli b,lli n){

    if(a==b){
		return (power(a , n , mod) + power(b , n , mod)) % mod;
    }
    lli cand=1;
    lli num=a-b;
    for(lli i=1;i*i<=num;i++){

        if(num%i==0){
            lli tmp=(power(a,n,i)+power(b,n,i))%i;
            if(tmp==0) cand=max(cand,i);

            tmp=(power(a,n,num/i)+power(b,n,num/i))%(num/i);
            if(tmp==0) cand=max(cand,num/i);
            
        }

    }

    return cand%mod;
}

int main(){
    lli test_cases;
    cin>>test_cases;
    while(test_cases--){
        lli a,b,n;
        cin>>a>>b>>n;
        cout<<gcd(a,b,n)<<"\n";
    }
}