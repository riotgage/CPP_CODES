#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    while (test_cases--){
        int n,m,temp;
        cin>>n>>m;
        int c=n;
        int sum=(m-1)*m/2;
        for(int i=0;i<n;i++){
            cin>>temp;
            if(temp<m){
                sum-=temp;
            }
            else if(temp==m){
                c--;
            }
        }
        if(sum==0 && c!=0){
            cout<<c<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
    }
    
}