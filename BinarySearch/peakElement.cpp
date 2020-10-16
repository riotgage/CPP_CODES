#include<bits/stdc++.h>
using namespace std;
int findPeakElement(vector<int>& arr) {
        int start=0;
        int last=arr.size()-1;
        while(start<=last){
            int mid=start+(last-start)/2;
            if(mid>0 && mid<arr.size()-1){
                if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])return mid;
                else if(arr[mid]<arr[mid+1])start=mid+1;
                else last=mid-1;
            }
            
            else if(mid==0){
                if(arr[mid]>arr[mid+1])return mid;
                return 1;
            }
            else {
                if(arr[mid]>arr[mid-1])return mid;
                return mid-1;
            }
        }
        return -1; 
}
int main(){
    vector<int>nums={43,6,8,3,67};
    cout<<findPeakElement(nums);
}