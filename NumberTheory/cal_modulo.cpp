#include<iostream>
using namespace std;

long long int pow (long long int base,long long int power,long long int m){
    long long int res=1;
    while(power>0){
        if(power%2){    //odd 
            power--;
            res=(res*base)%m;
        }
        power/=2;
        base=(base*base)%m;
    }
    return res;
}
long long int d,x,y;
void extend_euclid(long long int a,long long int b){
    if(b==0){
        d=a;
        x=1;
        y=0;
    }
    else {
        extend_euclid(b,a%b);
        int temp=x;
        x=y;
        y=temp-(a/b)*y;
    }
}

int main(){
    long long int a,b,c,m;
    cin>>a>>b>>c>>m;
    long long int d=pow(a,b,m);
    extend_euclid(c,m);
    x=(x%m+m)%m;
    cout<<(d*x)%m;
}