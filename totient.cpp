#include<bits/stdc++.h>
using namespace std;
#define n 1000000
// O(sqrt (n))
// This uses naive approach of factorization.
// int phi(int n){
//     int res=n;
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){     // each i which enters this "if" will be prime 
//             res/=i;
//             res*=(i-1);
//             while(n%i==0){
//                 n/=i;
//             }
//         }
//     }
//     if(n>1){
//         res/=n;
//         res*=(n-1);
//     }
//     return res;
// }


// O( log (log n))
// This uses seive approach of factorization.
// vector<int>sieve(n,-1);  // -1 represents prime number
// void seive_prime(){
//     sieve[0]=0;
//     sieve[1]=1;
//     for(int i=2;i*i<=n;i++){
//         if(sieve[i]==-1){
//             sieve[i]=i;
//             for(int j=i*i;j<=n;j++){
//                 if(sieve[j]==-1){
//                     sieve[j]=i;
//                 }
//             }
//         }
//     }
// }

// int phi(int num){
//     int res=num;
//     int last=-1;
    
//     while(1){
//         int i=sieve[num];
//         if(i==1){
//             res/=num;
//             res*=num-1;
//             break;
//         }
//         if(i!=last){
//             last=i;
//             res/=i;
//             res*=i-1;
//         }
//         num/=i;
//     }
//     return res;
// }


//Sieve with Phi function

// initilize array with index itself, for each prime number , multiply all its multipels with n-1 and
// divide it with n

vector<int>phi(n);
void init(){
    
    for(int i=1;i<=n;i++){
        phi[i]=i;
    }
    
    for(int j=2;j<=n;j++){
        if(phi[j]==j){  // j is prime
            for(int k=j;k<=n;k+=j){
                phi[k]/=j;
                phi[k]*=j-1;
            }   
        }
    }


}


int main(){
    int test;
    cin>>test;
    init();
    while(test--){
        int num;
        cin>>num;
        cout<<phi[num]<<"\n";
    }
}