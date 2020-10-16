#include<bits/stdc++.h>
using namespace std;
int search(vector<int> nums,int elem){
    int start=0;
    int last=nums.size()-1;
    while(start<=last){
        int mid=start+(last-start)/2;
        if(nums[mid]==elem)return nums[mid];
        else if(nums[mid]>elem){
            last=mid-1;
        }
        else{ 
            start=mid+1;
        }
    }
    cout<<"start: "<<start<<"\n";
    if(abs(nums[start]-elem)>abs(nums[last]-elem))return nums[last];
    return nums[start];
}
int main(){
    vector<int> nums={4,5,12,65,78,93,97};
    int elem=90;
    cout<<search(nums,elem);
}