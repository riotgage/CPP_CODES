#include<bits/stdc++.h>
using namespace std;

char nextLetter( vector<char>alphas,char c){
    int start=0;
    char res=c;
    int last=alphas.size()-1;
    while(start<=last){
        int mid=start+(last-start)/2;
        if(alphas[mid]==c){return c;}
        if(alphas[mid]<c)start=mid+1;
        else{
            res=alphas[mid];
            cout<<res<<"\n";
            last=mid-1;
        }
    }
    return res;
}

int main(){
    vector<char>alphas={'a','c','g','i','p','v','z'};
    char c;
    cin>>c;
    cout<<nextLetter(alphas,c);
}