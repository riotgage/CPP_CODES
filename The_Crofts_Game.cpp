#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>a,pair<int,int>b){
    return a.first+a.second>b.first+b.second;
}
int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int n;
        
        cin>>n;
        vector<pair<int,int>>arr(n);
        
        for(int i=0;i<n;i++){
            cin>>arr[i].first;
        }

        for(int i=0;i<n;i++){
            cin>>arr[i].second;
        }
        int a=0,b=0;
        sort(begin(arr),end(arr),comp);
        for(int i=0;i<n;i++){
            if(i%2==0){
                a+=arr[i].first;
            }
            else{
                b+=arr[i].second;
            }
        }

        if(a==b)cout<<"Tie\n";
        else if(a>b)cout<<"First\n";
        else cout<<"Second\n";
    }
}