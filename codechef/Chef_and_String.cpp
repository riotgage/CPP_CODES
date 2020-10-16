#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1]){
                i++;
                count++;
            }
        }
        cout<<count<<"\n";
    }
}