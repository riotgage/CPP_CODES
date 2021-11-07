/*Given an array of integers, return a new array such that each element at index 
i of the new array is the product of all the numbers in the original array except the one at i.*/

#include<bits/stdc++.h>

using namespace std;

vector<int> product(vector<int>& nums) {
    int n=nums.size();
    vector<int> left(n),prod(n);
    vector<int> right(n);

    left[0]=1;
    right[n-1]=1;

    for(int i=1;i<n;i++){
        left[i]=left[i-1]*nums[i-1];
    }

    for(int i=n-2;i>=0;i--){
        right[i]=right[i+1]*nums[i+1];
    }

    for(int i=0;i<n;i++){
        prod[i]=left[i]*right[i];
    }

    return prod;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n),ans;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    ans=product(nums);
    for(int i:ans){
        cout<<i<<'\t';
    }
    cout<<"\n";
}