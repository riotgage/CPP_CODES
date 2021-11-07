/*Given an array of integers, write a function to determine whether the array could become non-decreasing by modifying at most 1 element.

For example, given the array [10, 5, 7], you should return true, since we can modify the 10 into a 1 to make the array non-decreasing.

Given the array [10, 5, 1], you should return false, since we can't modify any one element to get a non-decreasing array.*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int last_max=-1;
    int p;
    bool flag=true;
    bool changed=false;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]<arr[i]){
            if(changed){
                flag=false;
                break;
            }
            p=i;
        }
    
    }
    if(flag){
        bool possible=(p == 0) or p == arr.size()-2 || arr[p-1] <= arr[p+1] || arr[p] <= arr[p+2];
        if(possible)cout<<p;
    }
    else cout<<-1;
}