#include<iostream>
using namespace std;
int main(){
    int r,b;
    cin>>r>>b;
    cout<<min(r,b)<<" ";
    cout<<(max(r,b)-min(r,b))/2;
}