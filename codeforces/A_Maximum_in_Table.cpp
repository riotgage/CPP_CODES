#include<iostream>
using namespace std;
int f(int m,int n){
    if(n==1 || m==1){
        return 1;
    }
    
        return (f(m-1,n)+f(m,n-1));
    
}
int main(){
    int n;
    cin>>n;
    cout<<f(n,n);
    return 0;
}