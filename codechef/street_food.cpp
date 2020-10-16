#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    while (test_cases--){
        int num;
        cin>>num;
        int *v,*p,*s;
        int index=0;
        int max=0,profit;
        v=new int[num];
        p=new int[num];        
        s=new int[num];
        for(int i=0;i<num;i++){
            cin>>s[i]>>p[i]>>v[i];
        }
        for(int i=0;i<num;i++){
            profit=v[i]*floor(p[i]/(s[i]+1));
            if(profit>max){
               max=profit;
               index=i; 
            }
        }
        cout<<profit<<endl;


    }
        
}