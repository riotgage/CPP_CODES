#include<iostream>
using namespace std;
int sum(long long n){
    int s=0;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    return s;
}
int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int n;
        cin>>n;
        int counta=0,countb=0;
        long long int a,b;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            if(sum(a)>sum(b)){
                counta++;
            }
            else if(sum(a)<sum(b)){
                countb++;
            }
            else{
                counta++;
                countb++;
            }
        }
        if(counta>countb)cout<<0<<" "<<counta<<"\n";
        else if(countb>counta)cout<<1<<" "<<countb<<"\n";
        else cout<<2<<" "<<counta<<"\n";
    }
}