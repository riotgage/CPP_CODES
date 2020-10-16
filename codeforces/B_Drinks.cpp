#include<iostream>
using namespace std;
int main(){
    double sum=0;
    int n;
    cin>>n;
    int *arr;
    arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum/n;


}