#include<bits/stdc++.h>
using namespace std;

int main(){
    int p,d1,v1,d2,v2;
    cin>>d1>>v1>>d2>>v2>>p;
    float ans=float(p+(d1*v1)+(d2*v2)-v1-v2)/(v1+v2);
    cout<<ceil(ans);
}