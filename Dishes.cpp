#include<bits/stdc++.h>
using namespace std;

int main(){

    int test;
    cin>>test;
    while(test--){
        int n,max2=0,max1=0;
        cin>>n;
        int t;
        vector<int>nums(n);        
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        sort(nums.begin(),nums.end());
        int i=n-1;
        while(i>=0){
            if(max2>max1){
                max1+=nums[i];
            }
            else max2+=nums[i];
            i--;
        }
        cout<<max(max1,max2)<<"\n";
    }

}