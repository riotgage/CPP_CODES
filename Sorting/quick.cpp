#include <bits/stdc++.h>
using namespace std;


int partition(vector<int> &arr,int start,int end){
    int pivot=(start+end)/2;
    int i=start,j=end;
    while(i<j){
        while(i<j && arr[i]<arr[pivot]){
            i++;
        }
        while(i<j && arr[j]>=arr[pivot]){
            j--;
        }
        swap(arr[i],arr[j]);
    }
    swap(arr[j],arr[pivot]);
    return i;
}
void quickSort(vector<int> &arr,int start,int end){

    if(start<end){
        int p=partition(arr,start,end);
        quickSort(arr,start,p-1);
        quickSort(arr,p+1,end);
    }

}

int main(){
    vector<int>arr={43,1,65,4,12,7,0};
    quickSort(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<"\t";
    }
}