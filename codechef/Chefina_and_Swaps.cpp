#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int n;
        cin>>n;
        int t;
        map<int,int>A;
        map<int,int>B;
        for(int i=0;i<n;i++){
            cin>>t;
            A[t]++;
        }
        for(int i=0;i<n;i++){
            cin>>t;
            if(A.find(t)!=A.end()){
                if(A[t]>1)A[t]--;
                else A.erase(t);
            }
            else B[t]++;
        }
        if(A.size()!=B.size()){
            cout<<-1<<"\n";
            continue;
        }
        int cost=0;
        auto itrA=A.begin();
        auto itrB=B.begin();
        for(;itrA!=A.end() && itrB!=B.end();itrA++,itrB++){
        }    

    }
}