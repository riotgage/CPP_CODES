#include<bits/stdc++.h>
using namespace std;
int search(vector<int> nums,int elem){
    int start=0;
    int last=nums.size()-1;
    while(start<=last){
        int mid=start+(last-start)/2;
        if(nums[mid]==elem)return mid;
        else if(nums[mid]>elem){
            last=mid-1;
        }
        else{ 
            start=mid+1;
        }
    }
    return -1;
}
int main(){
    vector<int> nums={4,5,12,65,78,93,97};
    int elem=70;
    cout<<search(nums,elem);
}