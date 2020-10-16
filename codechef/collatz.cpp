#include<iostream>
using namespace std;

int collatz(int n){
    if(n==1){
        return 0;
    }

    if(n%2){
        return 1+collatz(3*n+1);
    }
    else{
        return 1+collatz(n/2);
    }
}
int main(){
    int n,steps;
    cin>>n;
    cout<<endl<<collatz(n);
}
