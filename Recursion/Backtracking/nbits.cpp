#include<iostream>
using namespace std;
int *A;
int N;
int binary(int n){
    if(n==0){
        for(int i=0;i<N;i++)
            cout<<A[i];
        cout<<"\n";

    }
    else{
        A[n-1]=1;
        binary(n-1);
        A[n-1]=0;
        binary(n-1);
    }
}
int main(){
    cin>>N;
    A=new int[N];
    binary(N);
}