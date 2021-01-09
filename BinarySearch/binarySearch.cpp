#include<bits/stdc++.h>
using namespace std;
int search(vector<int> arr,int X){
    // int start=0;
    // int last=nums.size()-1;
    // while(start<=last){
    //     int mid=start+(last-start)/2;
    //     if(nums[mid]==elem)return mid;
    //     else if(nums[mid]>elem){
    //         last=mid-1;
    //     }
    //     else{ 
    //         start=mid+1;
    //     }
    // }
    // return -1;
    int size=arr.size();
    int start=0,end=size-1;
    int middle;
    sort(arr.begin(),arr.end());
    while(start<=end){
        middle=(start+end)/2;
        if(arr[middle]==X){
            return middle;
        }
        if(arr[middle]<X){
            start=middle+1;
        }
        else end=middle-1;
    }
    return -1;
}
int main(){
    vector<int> nums={16,82,58,24,37,62,24,0,36};
    int elem=36;
    cout<<search(nums,elem);
}