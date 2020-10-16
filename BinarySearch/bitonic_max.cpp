#include<bits/stdc++.h>
using namespace std;
int bitonicMax(vector<int>& arr) {
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

int Ascsearch(vector<int> nums,int elem,int start,int last){
    
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

int Dessearch(vector<int> nums,int elem,int start,int last){

    while(start<=last){
        int mid=start+(last-start)/2;
        if(nums[mid]==elem)return mid;
        else if(nums[mid]<elem){
            last=mid-1;
        }
        else{ 
            start=mid+1;
        }
    }
    return -1;
}

int main(){
    vector<int>nums={3,6,18,13,7};
    int elem=18;
    int i=bitonicMax(nums);
    if(nums[i]==elem)cout<<i;
    else if(nums[i]<elem)cout<< -1;
    else if(Ascsearch(nums,elem,0,i-1)!=-1)cout<<Ascsearch(nums,elem,0,i-1);
    else cout<< Dessearch(nums,elem,i,nums.size());
}