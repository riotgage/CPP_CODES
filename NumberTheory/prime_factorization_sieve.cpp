#include<bits/stdc++.h>
using namespace std;
vector<int>smallest_factor(51,-1);  // -1 represents prime
void sieve(){
    smallest_factor[0]=0;
    smallest_factor[1]=1;
    for(int i=2;i<=50;i++){
        if(smallest_factor[i]==-1){
            smallest_factor[i]=i;           //i  is prime , smallest factor is that number itself
            for(int j=i*i;j<=50;j+=i){
                if(smallest_factor[j]==-1)
                    smallest_factor[j]=i;       // chnage every multiple of i , if it is not already updated by other number.
            }
        }
    }
}
int main(){
    int num;
    cin>>num;
    sieve();
    map<int,int>factors;
    // for(int i=0;i<=50;i++){
    //     cout<<i<<'\t'<<smallest_factor[i]<<"\n";
    // }
    while(num>1){
        factors[smallest_factor[num]]++;
        num=num/smallest_factor[num];
    }
    auto itr=factors.begin();
    for(;itr!=factors.end();itr++){
        cout<<itr->first<<"^"<<itr->second<<" ";
    }
}