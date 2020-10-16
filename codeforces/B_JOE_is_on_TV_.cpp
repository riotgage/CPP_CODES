#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    float sum=0;
    while(n!=0){
        sum+=1/float(n);
        n--;
    }
    cout<<sum;
}