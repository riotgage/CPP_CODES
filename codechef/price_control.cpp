#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int n,k;
        cin>>n>>k;
        int temp,sum=0;
        for(int i=0;i<n;i++){
            cin>>temp;
            if(temp>k)sum+=temp-k;
        }
        cout<<sum<<"\n";
    }
}