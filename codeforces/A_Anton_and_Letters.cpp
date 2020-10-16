#include<bits/stdc++.h>
using namespace std;
int main(){
    char c;
    set<char>s;
    int i=0;   
    do{
        cin>>c;
        if(c==',')i=1;
        s.insert(c);
    }while(c!='}');
    cout<<s.size()-2-i;
}