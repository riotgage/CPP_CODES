#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>p1,pair<int,int>p2){
    return p1.first<p2.first;
}
int main(){
    
        int s,n;
        cin>>s>>n;
        vector<pair<int,int>>strength(n);
        for(int i=0;i<n;i++){
            cin>>strength[i].first;
            cin>>strength[i].second;
        }
        if(n!=1)
        sort(begin(strength),end(strength),comp);
        for(int i=0;i<n;i++){

            if(s>strength[i].first){
                s+=strength[i].second;
            }
            else{
                cout<<"NO\n";
                exit(0);
            }
        }
        cout<<"YES\n";
}