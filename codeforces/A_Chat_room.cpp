#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    char str[]={'h','e','l','l','o'};
    int j=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==str[j]){
            j++;
            if(j==5){
                cout<<"YES";
                exit(0);
            }
        }
    }
    
    cout<<"NO";
}