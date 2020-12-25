#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin>>test_cases;
    while (test_cases--){
        long int a,b,evena=0,evenb=0,odda,oddb;
        cin>>a>>b;
        evena=floor(float(a)/2);
        odda=a-evena;
        evenb=floor(float(b)/2);
        oddb=b-evenb;
        cout<<(evena*evenb)+(odda*oddb)<<"\n";
    }
}