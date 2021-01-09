#include<bits/stdc++.h>
using namespace std;

int josephus(int n, int k) {
    return n > 1 ? (josephus(n-1, k) + k) % n : 1;
}

int main(){
    int n,k;
    cin>>n>>k;

    cout<<josephus(n,k);
}