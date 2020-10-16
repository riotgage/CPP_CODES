
#include<bits/stdc++.h>
using namespace std;
bool isvalid(vector<int> arr, int n, int m, int curr_min) 
{ 
    int studentsRequired = 1; 
    int curr_sum = 0; 
  
    // iterate over all books 
    for (int i = 0; i < n; i++) 
    { 
        // check if current number of pages are greater 
        // than curr_min that means we will get the result 
        // after mid no. of pages 
        if (arr[i] > curr_min) 
            return false; 
  
        // count how many students are required 
        // to distribute curr_min pages 
        if (curr_sum + arr[i] > curr_min) 
        { 
            // increment student count 
            studentsRequired++; 
  
            // update curr_sum 
            curr_sum = arr[i]; 
  
            // if students required becomes greater 
            // than given no. of students,return false 
            if (studentsRequired > m) 
                return false; 
        } 
  
        // else update curr_sum 
        else
            curr_sum += arr[i]; 
    } 
    return true; 
} 

int findPages(vector<int> nums, int n, int m,int sum){
    if(m>n){
        return -1;
    }
    int start=0;
    int last=sum;
    int res=INT_MAX;

    while(start<=last){
        int mid=(start+last)/2;
        if(isvalid(nums,n,m,mid)){
            res=min(mid,res);
            last=mid-1;
        }
        else{
            start=mid+1;
        }
    return res;
    }
}
int main(){
    int n,k;
    cin>>n>>k;
    int res=INT_MAX;
    cout<<"n: "<<n;
    cout<<"k: "<<k;
    vector<int>nums(k);
    int sum=0;
    
    for(int i=0;i<n;i++){
        cin>>nums[i];
        sum+=nums[i];
    }
    cout<<"Sum: "<<sum<<"\n";
    cout<<findPages(nums,n,k,sum);
}