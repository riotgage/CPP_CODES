#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int test_cases,x;
    cin>>test_cases;
    while(test_cases--){
        cin>>x;
        int days=x/2;
        cout<<days<<endl;
        if(x%2==0){
            for(int i=1;i<=days;i=i+2){
                cout<<"2 "<<i<<" "<<i+1<<endl;
            }
        }
        else{
            cout<<"3 1 2 3"<<endl;
            for(int i=4;i<=x;i=i+2){
                cout<<"2 "<<i<<" "<<i+1<<endl;
            }
        }
    }
}