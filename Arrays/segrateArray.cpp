/*Given an array of integers, segrate all negative integers to left and positive integers to right. 
*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // vector<int>nums(n,0);
    // for(int i=0;i<n;i++){
    //     cin>>nums[i];
    // }
    vector<int>nums={10,3,-2,1,-30,0,-4};
    int i=0,j=0;

    for(;i<nums.size();i++){
        if(nums[i]<=0){
            swap(nums[i],nums[j]);
            j++;
        }
    }
    cout<<j<<"\n";
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<"\t";
    }    
}