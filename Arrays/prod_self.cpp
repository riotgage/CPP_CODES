#include<bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>output;
        vector<int >prefix_prod;
        prefix_prod.push_back(1);
        for(int i=1;i<nums.size();i++){
            prefix_prod.push_back(prefix_prod[i-1]*nums[i-1]);
        }
        int n=nums.size();
        vector<int>suffix_prod(nums.size());
        suffix_prod[n-1]=1;
        for(int i=n-2;i>=0;i--){
            suffix_prod[i]=suffix_prod[i+1]*nums[i+1];
        }
        for(int i=0;i<nums.size();i++){
            output.push_back(prefix_prod[i]*suffix_prod[i]);
        }
        return output;
}

int main(){
    vector<int>nums;
    int num,temp;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>temp;
        nums.push_back(temp);
    }
    nums=productExceptSelf(nums);
}