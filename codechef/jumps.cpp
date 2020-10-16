#include<iostream>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int x1,x2,v1,v2;
        cin>>x1>>x2>>v1>>v2;
        if(x1==x2 && v1!=v2){
            cout<<"NO";
        }
        else{
            if((x1-x2)%abs(v1-v2)==0)
                cout<<"YES";
            else cout<<"NO";
        }
        

    }
}