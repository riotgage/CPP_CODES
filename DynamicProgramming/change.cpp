#include<bits/stdc++.h>
using namespace std;
int denominations(int n,int coins[]){
    
    if(n==0)return 0;
    
    int mincoins=INT_MAX;

    for(int i=0;i<3;i++){
        if(n>=coins[i]){
            int numcoins=denominations(n-coins[i],coins);    
            if (numcoins != INT_MAX && numcoins+1<mincoins){
                mincoins=numcoins+1;
            }
        }
    }
    return mincoins;
}
int main(){
    int n;
    cin>>n;
    int coins[]={1,5,6};
    int c=denominations(n,coins);
    cout<<"Coins:\t"<<c;
}