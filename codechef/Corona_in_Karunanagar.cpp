#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int len,days;
        vector<int>p;
        string str;
        cin>>len;
        cin>>str;
        cin>>days;
        for(int i=0;i<days;i++){
            int temp;
            cin>>temp;
            temp-=2;
            p.push_back(temp);
        }
        set<int>s;
        for(int i=0;i<days;i++){
            s.insert(p[i]);
            for(int i=0;i<str.length;i++){
                if(str[i]=='1'){
                    if(s.find(i-1)==s.end() && i-1>=0){
                        s.
                    }
                }
            }
        }
        
    }
}