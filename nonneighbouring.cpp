/*
Given a list of integers, write a function that returns the largest sum of non-adjacent numbers. Numbers can be 0 or negative.

For example, [2, 4, 6, 2, 5] should return 13, since we pick 2, 6, and 5. [5, 1, 1, 5] should return 10, since we pick 5 and 5.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int>nums={2,4,6,2,5};
    /*int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        nums.push_back(t);
    }*/
    int inc=0;
    int exc=0;
    for(int i=0;i<nums.size();i++){
        int new_exc=max(inc,exc);
        inc=exc+nums[i];
        exc=new_exc;
    }
    cout<<max(inc,exc);
}