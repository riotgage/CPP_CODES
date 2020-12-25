#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin>>test_cases;
    while (test_cases--){
        int n,d;
        cin>>n;
        cin>>d;
        int risk=0,nonrisk=0;
        for(int i=0;i<n;i++){
            int age;
            cin>>age;
            if(age>=80  || age<=9){
                risk++;
            }
            else nonrisk++;
        }
        int days=ceil(float(risk)/d);
        days+=ceil(float(nonrisk)/d);
        cout<<days<<"\n";
    }
}