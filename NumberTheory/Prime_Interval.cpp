#include<bits/stdc++.h>
using namespace std;

int main(){
    int l,r;
    cin>>l>>r;
    bool is_prime[r+1];
    is_prime[0]=true;
    is_prime[1]=true;  
    memset(is_prime,false,r+1);     //true means composite
    for(int i=2;i*i<=r;i++){
        if(is_prime[i]==false){
            for(int j=i*i;j<=r;j+=i){
                is_prime[j]=true;
                if(j==59)cout<<"\n\n I is: "<<i<<"\n\n";
            }
        }
    }
    for(int i=l;i<=r;i++){
        if(is_prime[i]==false){
            cout<<i<<" ";
        }
    }
}