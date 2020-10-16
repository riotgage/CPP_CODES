#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int num;
        vector<int>s;
        cin>>num;
        int temp;
        for(int i=0;i<num;i++){
            cin>>temp;
            s.push_back(temp);
        }
        int last=-6,i;
        for(i=0;i<num;i++){
            if(s[i]==1){
                
                if(i-last<6){
                    cout<<"NO"<<endl;
                    break;
                }
                last=i;
            }
        }
        if(i==num)
            cout<<"YES"<<endl;

    }
}