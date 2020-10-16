#include<bits/stdc++.h>
using namespace std;

#define lli long long int 
#define mod 1000000007
lli arr[3];
lli I[3][3],T[3][3];


void mul(lli A[3][3],lli B [3][3],int dim){
    lli res[dim+1][dim+1];
    for(int i=1;i<=dim;i++){
        for(int j=1;j<=dim;j++){
            res[i][j]=0;
            for(int k=1;k<=dim;k++){
                res[i][j]=(res[i][j]+(A[i][k]*B[k][j])%mod)%mod;
            }
        }
    }
    for(int i=1;i<=dim;i++){
        for(int j=1;j<=dim;j++){
            A[i][j]=res[i][j];
        }
    }
}
lli getFib(int n){
    if(n<=2)return arr[n];
    I[1][1]=I[2][2]=1;                              //Identity Matrix
    I[1][2]=I[2][1]=0;

    T[1][1]=0;                                      // Transition Matrix
    T[1][2]=T[2][1]=T[2][2]=1;

    n=n-1;
    while(n){                                       //Binary Exponentiation Logic
        if(n%2){                                
            mul(I,T,2),n--;
        }
        else {
            mul(T,T,2),n/=2;
        }
    }
    lli x =(arr[1]*I[1][1]+ arr[2]*I[2][1])%mod;
    return x;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>arr[1]>>arr[2]>>n;
        n++;
        cout<<getFib(n)<<endl;    
    }
}