#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    int cas=1;
    while(cas<=test_cases){
        string s;
        cin>>s;
        cout<<"Case #"<<cas<<": ";
        int rem=0;
        for(int i=0;i<=s.size()-1;i++){
            if((s[i]-'0')>rem){
                for(int j=0;j<(s[i]-'0')-rem;j++){
                    cout<<"(";
                }
                cout<<s[i];
                rem=s[i]-'0';
            }
            else if((s[i]-'0')<rem){
                for(int j=0;j<rem-(s[i]-'0');j++){
                    cout<<")";
                }
                cout<<s[i];
                rem=s[i]-'0';
            }
            else if((s[i]-'0')==rem){
                cout<<s[i];
                
            }
        }
        while(rem--){
            cout<<")";
        }
        cout<<endl;
        cas++;        
    }
}