#include<iostream>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    int team_mates;
    int *a;
    int *b;
    while(test_cases--){
        cin>>team_mates;
        a=new int[team_mates];
        b=new int[team_mates];
        int max1=0,max2=0;
        for(int i=0;i<team_mates;i++){
            cin>>a[i];
            if(a[i]>max1){
                max1=a[i];
            }
        }
        for(int i=0;i<team_mates;i++){
            cin>>b[i];
            if(b[i]>max2){
                max2=b[i];
            }
        }
        if(max1-max2==0){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }


    }
}