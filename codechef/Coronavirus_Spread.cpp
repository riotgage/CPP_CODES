#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        vector<int>nums;
        int n,temp;
        cin>>n;
        int min=INT32_MAX;
        int max=0,count=1;
        for(int i=0;i<n;i++){
            cin>>temp;
            nums.push_back(temp);
        }
        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]<=2){
                count++;
            }
            else{
                if(count>max){
                    max=count;
                }
                if(count<min){
                    min=count;
                }
                count=1;
            }
        }
        if(count>max){
                    max=count;
                }
                if(count<min){
                    min=count;
                }
        cout<<min<<" "<<max<<"\n";
    }
}