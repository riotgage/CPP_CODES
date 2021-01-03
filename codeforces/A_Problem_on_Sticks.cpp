#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int n,*arr;
        int count=0;
        cin>>n;
        arr=new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=n-1;i>=0;i--){
            if(arr[i]>arr[i-1]){
                count++;
            }
        }
        cout<<count<<"\n";
    }

}