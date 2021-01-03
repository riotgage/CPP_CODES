#include<bits/stdc++.h>
using namespace std;
bool is_prime[1000001];
vector<long int>primes(1000001,0);
vector<long int>pp(1000001,0);

void sieve(){
    int max_n=1000000;
    memset(is_prime,true,max_n+1);
    //1  means prime
    is_prime[0]=false;
    is_prime[1]=false;
    for(int i=2;i*i<max_n;i++){
        if(is_prime[i]==true){
            for(int j=i*i;j<max_n;j+=i){
                is_prime[j]=false;
            }
        }
    }
    primes[2]=1;
    for(int i=3;i<max_n;i++){
        if(is_prime[i]==true){
            primes[i]=primes[i-1]+1;
        }
        else{
            primes[i]=primes[i-1];
        }
    }
    for(int i=3;i<max_n;i++){
        if(is_prime[primes[i]]==1){
            pp[i]=pp[i-1]+1;
        }
        else{
            pp[i]=pp[i-1];
        }
    }

}

int main(){
    int l,r;
    int test_cases;
    cin>>test_cases;
    sieve();
    while(test_cases--){
        int l,r;
        int count=0;
        cin>>l>>r;
        count=pp[r]-pp[l-1];
        cout<<count<<"\n";
    }
}