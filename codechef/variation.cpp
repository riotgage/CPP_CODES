#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0,i,j;
    sort(arr,arr+n);

    for(i=0,j=1;i<n && j<n;){
        if(abs(arr[j]-arr[i])>=k){
            count+=n-j;
            i++;
        }
        else{
            j++;
        }
    }
    cout<<count;
}