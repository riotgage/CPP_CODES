#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x=(a+b)/2;
        int y=(b+c)/2;
        int z=(c+d)/2;
        cout<<x<<" "<<y<<" "<<z<<" "<<endl;
    }
}