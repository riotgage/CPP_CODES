#include<bits/stdc++.h>
using namespace std;

vector<int>primes;
#define limit 100000
void seive(){
    vector<bool> prime(limit+1,true);   
    for (int i=2; i*i<=limit; i++) 
    { 
        if (prime[i] == true) 
        { 

            for (int j=i*i; j<=limit; j += i) 
                prime[j] = false; 
        } 
    } 
    for (int i=2; i<=limit; i++) 
       if (prime[i]) 
          primes.push_back(i); 
}

int main(){
    int test_cases;
    cin>>test_cases;
    seive();
    while (test_cases--){
        int n;
        cin>>n;
        vector<int>nums(n),ans(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
            ans[i]=primes[i];
        }
        cout<<"\n";
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1){
                ans[i]=ans[nums[i]-1];
            }
        }
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    
}