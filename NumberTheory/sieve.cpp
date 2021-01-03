#include<bits/stdc++.h>
using namespace std;
vector<long long int>primes;
bool is_prime[90000001];
void sieve(long long int max_n){
    is_prime[0]=true;
    is_prime[1]=true;
    for(long long int i=2;i*i<max_n;i++){
        if(is_prime[i]==false){
            for(long long int j=i*i;j<max_n;j+=i){
                is_prime[j]=true;
            }
        }
    }
    for(long int i=2;i<max_n;i++){
        if(!is_prime[i])primes.push_back(i);

    }
    
}
int main(){
    long long int max_n=90000000;
    sieve(max_n);
    long int q;
    cin>>q;
    while(q--){
        long int num;
        cin>>num;
        cout<<primes[num-1]<<"\n";
    }
    
}
