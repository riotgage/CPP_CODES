#include<bits/stdc++.h>
using namespace std;
struct time{
    int start;
    int end;
};

bool comp(struct time t1,struct time t2){
    return t1.start>t2.start;
}
int main(){
    int test_cases;
    cin>>test_cases;
    int cas=1;
    while(cas<=test_cases){
        string s="";
        int J_curr_end=0;
        int C_curr_end=0;
        int n;
        cin>>n;
        struct time t[n];
        for(int i=0;i<n;i++){
            cin>>t[i].start;
            cin>>t[i].end;
        }
        sort(t,t+n,comp);
        for(int i=0;i<n;i++){
            if(t[i].start>J_curr_end){
                s+="J";
                J_curr_end=t[i].end;
            }
            else if(t[i].start>)
        }
        
    }
}