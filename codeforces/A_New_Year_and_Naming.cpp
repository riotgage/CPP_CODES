#include<iostream>
using namespace std;
int main(){
    int m,n,queries;
    cin>>m>>n;
    int year;
    string s1[m];
    string s2[n];
    for(int i=0;i<m;i++){
        cin>>s1[i];
    }
    for(int i=0;i<n;i++){
        cin>>s2[i];
    }

    cin>>queries;
    while (queries--){
        cin>>year;
        year--;
        string res=s1[year%m]+s2[year%n];
        cout<<res<<endl;
    }

    
}