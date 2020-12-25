/*
You are given two binary strings A and B

with the same length.

You may perform the following operation any number of times (including zero): pick a substring of A

with odd length and invert all the bits (change '0' to '1' or vice versa) at odd positions in this substring. For example, if we choose a substring "01011", we can convert it to "11110" (bits at odd positions are bold).

Determine the minimum number of operations required to change the string A
to the string B.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin>>test_cases;

    while(test_cases--){
        string a,b,ans;
        cin>>a>>b;
        int count=0;
        int len=a.size();
        for(int i=0;i<len;i++){
            if(a[i]==b[i]){
                continue;
            }
            int j=i;
            while(j<len && a[j]!=b[j]){
                a[j]=b[j];
                j+=2;
            }
            count++;
        }
        cout<<count<<"\n";
    }
}