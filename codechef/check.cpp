#include<iostream>
using namespace std;
int main(){
    int test_cases;
    cin>> test_cases;
    while(test_cases--){
        string s;
        string ans="";
        cin>>s;
        int j=0;
        for(int i=0;i<s.length();i++){
            j=i;
            while(s[j]==s[j+1]){
                j++;
            }
            ans+=s[i]+to_string(j-i+1);
            cout<<"I"<<i<<"   j"<<j <<"  char "<<s[i]<<endl;
            i=j;
        }
        if(s.length()<ans.length()){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}