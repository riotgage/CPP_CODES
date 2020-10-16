#include<bits/stdc++.h>
using namespace std;
int floors(vector<int> nums,int elem){
    int start=0;
    int res=elem;
    int last=nums.size()-1;
    while(start<=last){
        int mid=start+(last-start)/2;
        if(nums[mid]==elem)return mid;
        else if(nums[mid]>elem){
            last=mid-1;
            cout<<nums[last]<<"\n";
        }
        else{ 
            res=nums[mid];
            start=mid+1;
            cout<<nums[mid]<<"\n";
        }
    }
    return res;
}
int main(){
    vector<int> nums={4,5,12,65,78,93,97};
    int elem=2;
    cout<<floors(nums,elem);
}