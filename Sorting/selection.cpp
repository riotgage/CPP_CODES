#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr){

    cout<<"Selection Sort\n";
    int least=0;
    for(int i=0; i<arr.size();i++){
        least=i;
        for(int j=i;j<arr.size();j++){
            if(arr[j]<arr[least]){
                least=j;
        }
        swap(arr[i],arr[least]);
       }

    }
}

int main(){
    vector<int>arr={43,1,65,4,12,7,0};
    selectionSort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<"\t";
    }
}