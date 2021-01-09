#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr){

    cout<<"Insertion Sort\n";
    for(int i=1; i<arr.size();i++){
       int key=arr[i];
            int j=i-1;
            while (j >= 0 && arr[j] > key){
                arr[j + 1] = arr[j];
                j = j - 1;
            }
        arr[j + 1] = key;
    }
}

int main(){
    vector<int>arr={43,1,65,4,12,7,0};
    insertionSort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<"\t";
    }
}