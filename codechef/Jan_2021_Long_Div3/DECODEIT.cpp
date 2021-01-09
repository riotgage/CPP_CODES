#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin>>test_cases;
    map<string,char>mapping;
    vector<string>bins={"0000","0001","0010","0011","0100","0101","0110","0111","1000","1001","1010","1011","1100","1101","1110","1111"};
    char c='a';
    for(string s:bins){
        mapping[s]=c;
        c++;
    }
    while(test_cases--){
        string s,op="";
        int n;
        cin>>n;
        cin>>s;
        while(s.size()>1){
            op+=mapping[s.substr(0,4)];
            s.erase(s.begin(),s.begin()+4);
        }
        cout<<op<<"\n";
    }
}