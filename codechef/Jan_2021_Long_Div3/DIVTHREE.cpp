#include<iostream>
using namespace std;

int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int n,k,d;
        cin>>n>>k>>d;
        int sum=0;
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            sum+=t;
        }
        cout<<min(d,sum/k)<<"\n";
    }
}