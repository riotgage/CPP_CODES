#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr){

    cout<<"Insertion Sort\n";
    for(int i=1; i<arr.size();i++){
       if(arr[i]<arr[i-1]){
           int j=i;
           while(j>0 && arr[j]<arr[j-1]){
               swap(arr[j],arr[j-1]);
               j--;
           }
       }
    }
}

int main(){
    vector<int>arr={43,1,65,4,12,7,0};
    insertionSort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<"\t";
    }
}