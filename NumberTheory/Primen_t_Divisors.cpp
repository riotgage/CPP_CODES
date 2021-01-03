#include<bits/stdc++.h>
using namespace std;
#define lli long long int;
long long int n=pow(10,6);
vector<bool> is_prime(1000001);    
void sieve(){
    is_prime[0]=true;
    is_prime[1]=true;
    //false means prime
    for(long long int i=2;i*i<n;i++){
        if(is_prime[i]==false){
            for(long long int j=i*i;j<n;j+=i){
                is_prime[j]=true;
            }
        }
    }
    // for(long long int i=2;i<100;i++){
    //     if(!is_prime[i]){
    //         cout<<i<<" ";
    //     }
    // }

}
int main(){
    int test;
    cin>>test;
    sieve();
    while(test--){
        int m;
        cin>>m;
        int count=0;
        for(int i=1;i*i<=m;i++){
             if(m%i==0){
                if(is_prime[i]){
                    count++;
                }
                if(is_prime[m/i] && (m/i)!=1){
                    count++;
                }
             }
        }
        cout<<count<<"\n";
    }
}