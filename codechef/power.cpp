#include<iostream>
using namespace std;
int main(){
    int a,b,n;
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        cin>>a>>b>>n;
        if(a==b){
            cout<<0<<endl;
        }
        else if(a>b){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }

    }
   
}