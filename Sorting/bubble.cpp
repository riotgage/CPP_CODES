#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr){

    cout<<"Bubble Sort\n";
    for(int i=0; i<arr.size()-1;i++){
        for(int j=i+1; j<arr.size();j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

int main(){
    vector<int>arr={43,1,65,4,12,7,0};
    bubbleSort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<"\t";
    }
}