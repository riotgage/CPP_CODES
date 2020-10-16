#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int primeFactors(int x){
    int count=0;
    while(x%2==0){
        x/=2;
        count++;
    }
    for(int i=3;i<=sqrt(x);i+2){
        while (x%i==0)
        {
            count++;
            x/=i;
        }
        
    }
    return count+(x>2);
}
int main(){
    long long int test_cases,x,k;
    cin>>test_cases;
    while(test_cases--){
        cin>>x>>k;
        int factors=primeFactors(x);
        cout<<(factors>=k)<<endl;
    }
    return 0;
}