#include<bits/stdc++.h>
using namespace std;


void merge(int arr[],int left,int right){
    int mid=(left+right)/2;
    int lsize=mid-left+1;
    int rsize=right-mid;
    int pos=left;
    int leftarr[lsize];
    int rightarr[rsize];
    for(int i=0;i<lsize;i++){
        leftarr[i]=arr[left+i];
    }

    for(int i=0;i<rsize;i++){
        rightarr[i]=arr[mid+1+i];
    }

    int i=0,j=0;
    while(i<lsize && j<rsize){
        if(leftarr[i]<=rightarr[j]){
            arr[pos++]=leftarr[i++];
        }
        else{
            arr[pos++]=rightarr[j++];
        }
    }

    while(i<lsize){
        arr[pos++]=leftarr[i++];
    }
    while(j<rsize){
        arr[pos++]=rightarr[j++];
    }
}
void merge_sort(int arr[],int low,int high){
    if(low==high) return;
    int med=low+high/2;
    cout<<"hey";
    merge_sort(arr,low,med);
    merge_sort(arr,med+1,high);
    merge(arr,low,high);
}
int main(){
    int arr[]={4,54,46,9,5,12,53,21,76};
    merge_sort(arr,0,8);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<"\t";
    }
}

