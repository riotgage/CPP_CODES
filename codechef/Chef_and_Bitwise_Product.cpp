#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int nearesrPowerof2(int n) 
{ 
   int p = (int)log2(n); 
   return (int)pow(2, p);  
} 
int main(){
    int test_cases;
    cin>>test_cases;
    while (test_cases--){
        int x,y,l,r;
        cin>>x>>y>>l>>r;
        cout<<nearesrPowerof2(r)-1<<"\n";
        /*int pow2=(x &(nearesrPowerof2(r)-1))*(y&( nearesrPowerof2(r)-1));
        int powr=(x & r)*(y&r);
        int pow1=(x&(r-1))*(y&(r-1));

        int m=max(max(pow2,powr),max(pow1,powr));
        if(m==pow2){
            cout<<nearesrPowerof2(r)-1<<"\n";
        }
        else if(m==powr){
            cout<<r<<"\n";
        }
        else{
            cout<<r-1<<"\n";
        }*/
    }
    
}