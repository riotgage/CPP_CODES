#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int count=0;
        for(int i=0,j=0;j<n;j++){
            if(s[j]=='1'){
                i=j;
            }
            if(j-i>2*k+1){
                i++;
                count++;
            }
        }
        cout<<count<<"\n";
    }
}