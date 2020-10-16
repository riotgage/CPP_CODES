#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    int extra=0;
    cin>>n>>k;
    vector<int>walks(n);
    
    for(int i=0;i<n;i++){
        cin>>walks[i];
    }
    for(int i=1;i<n;i++){
        if(walks[i-1]+walks[i]<k){
        extra+=k-walks[i-1]-walks[i];
        walks[i]=k-walks[i-1];
        }

    }
    cout<<extra<<"\n";
    for(int i=0;i<n;i++){
        cout<<walks[i]<<" ";
    }

}