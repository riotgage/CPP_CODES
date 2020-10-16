#include<iostream>
using namespace std;
int main(){
    int n,k,w;
    cin>>k>>n>>w;
    int mon=(w*(w+1)/2)*k;
    if(mon<n){
        cout<<0;
    }
    else cout<<mon-n;
}