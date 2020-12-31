#include <bits/stdc++.h>
using namespace std;


void merge(vector<int> &arr,int left,int middle,int right){
    int leftSize = middle - left + 1;
    int rightSize = right - middle;
 
    int L[leftSize], R[rightSize];
    for (int i = 0; i < leftSize; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < rightSize; j++)
        R[j] = arr[middle + 1 + j];
 
    int i = 0,j = 0;
    int k = left;
 
    while (i < leftSize && j < rightSize) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < leftSize) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < rightSize) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int> &arr,int start,int end){

    if(end<=start){
        return;
    }
    int middle = (start+end-1)/2;
    mergeSort(arr,start,middle);
    mergeSort(arr,middle+1,end);
    merge(arr,start,middle,end);
}

int main(){
    vector<int>arr={43,1,65,4,12,7,0};
    mergeSort(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<"\t";
    }
}