#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        long long int num;
        long long int temp;
        cin>>num;
        vector<long long int>v;
        for(long long int i=0;i<num;i++){
            cin>>temp;
            v.push_back(temp);
        }
        sort(v.begin(),v.end(),greater<int>());
        long long int sum=0;
        for(long long int i=0;i<num;i++){
            temp=v[i]-i;
            if(temp>=0){
                sum+=temp;
            }
        }

        temp=pow(10,9)+7;
                sum=sum%(temp);
        cout<<sum<<endl;
    }

}