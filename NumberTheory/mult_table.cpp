/*Suppose you have a multiplication table that is N by N. That is, a 2D array where the value at the i-th row and j-th column is (i + 1) * (j + 1) (if 0-indexed) or i * j (if 1-indexed).

Given integers N and X, write a function that returns the number of times X appears as a value in an N by N multiplication table.

For example, given N = 6 and X = 12, you should return 4*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    int ans=0;
    for(int i=1;i<=n && i<sqrt(x);i++){
        if(x%i==0){
            if((x/i) <= n){
                cout<<i<<"\n";
                ans=ans+2;
            }
        }
    }
    cout<<ans;
}