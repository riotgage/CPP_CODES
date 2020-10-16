#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    string s;
    while(num--){
        cin>>s;
        int len=s.size();
        char d=s[len-1];
        char c=s[len-2];
        if(c=='s'&&d=='u'){
            cout<<"JAPANESE\n";
        }
        else if(c=='p'&&d=='o'){
            cout<<"FILIPINO\n";
        }
        else{
            cout<<"KOREAN\n";
        }
    }
}