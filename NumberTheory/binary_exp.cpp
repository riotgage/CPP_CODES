#include<bits/stdc++.h>
using namespace std;

int brute_power(int a,int num){
    int result=a;
    for(int i=1;i<num;i++){
        result*=a;
    }
}
int binary_exp(int base,int pow){
    int res=1;
    while(pow){         // while num !=0
        if(pow%2){      // if power is odd
            res*=base;
            pow--;
        }
        else{
            base*=base;
            pow/=2;
        }
    }
    return res;
}
int main(){
    int num,a;
    cin>>a;
    cin>>num;
    int result=binary_exp(a,num);
    cout<<"\n"<<result;
}