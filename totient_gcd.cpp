#include<bits/stdc++.h>
using namespace std;
#define n 1000000

vector<int>phi(1000001);
void init(){
    
    for(int i=1;i<=n;i++){
        phi[i]=i;
    }
    for(int j=2;j<=n;j++){
        if(phi[j]==j){  // j is prime
            for(int k=j;k<=n;k+=j){
                phi[k]/=j;
                phi[k]*=j-1;
            }   
        }
    }
}

int getcount(int d,int num){
    //returns number of i such that gcd(i,n)=d
    return phi[n/d];
}

int main(){
    int test;
    cin>>test;
    init();
    while(test--){
        int num;
        cin>>num;
        int sum=0;
        for(int i=1;i*i<=num;i++){
            if(num%i==0){
                int d1=i;
                int d2=num/i;
                sum+=getcount(d1,num);    //returns number of i such that gcd(i,num)=d

                if(d1!=d2){
                    sum+=getcount(d2,num);
                }
            }
        }
    }
}




