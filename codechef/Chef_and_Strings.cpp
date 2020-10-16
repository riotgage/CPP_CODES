#include<bits/stdc++.h>
using namespace std;
int main(){
    long int test_cases;
    cin>>test_cases;
    while(test_cases--){
        long int n;
        cin>>n;
        long int sum=0;
        long int f,s;
        cin>>f;
        for(long int i=1;i<n;i++){
            cin>>s;
            sum+=abs(f-s)-1;
        
            f=s;
        }
        cout<<sum<<"\n";
    }
}