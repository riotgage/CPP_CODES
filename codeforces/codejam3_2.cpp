#include<bits/stdc++.h>
using namespace std;
struct time{
    int start;
    int end;
};

bool free(int start,int end,vector<int> &arr_start,vector<int> &arr_end){
    char overlap=true;
    for(int i=0;i<arr_start.size();i++){
        if(arr_start[i]<start && start<arr_end[i]){
            overlap=false;
            return overlap;
        }

        if(arr_start[i]>start && end>=arr_end[i]){
            overlap=false;
            return overlap;
        }

        if(arr_start[i]<end && end<arr_end[i]){
            overlap=false;
            return overlap;
        }
                
        if(arr_start[i]==start && end>=arr_end[i]){
            overlap=false;
            return overlap;
        }
        
    }
    return overlap;
  
}

int main(){
    int test_cases;
    cin>>test_cases;
    int cas=1;
    while(cas<=test_cases){
        string s="";
        vector<int> J_start,J_end,C_start,C_end;

        int n;
        cin>>n;
        struct time t[n];
        for(int i=0;i<n;i++){
            cin>>t[i].start;
            cin>>t[i].end;
        }
        for(int i=0;i<n;i++){
            sort(J_start.begin(),J_start.end());
            sort(C_start.begin(),C_start.end());
            sort(J_end.begin(),J_end.end());
            sort(C_end.begin(),C_end.end());
            if(free(t[i].start,t[i].end,C_start,C_end)){
                C_start.push_back(t[i].start);
                C_end.push_back(t[i].end);
                s+="C";
            }
            else if(free(t[i].start,t[i].end,J_start,J_end)){
                J_start.push_back(t[i].start);
                J_end.push_back(t[i].end);
                s+="J";
            }
            else{
                s="IMPOSSIBLE";
                break;
            }
        }
        cout<<"Case #"<<cas<<": "<<s<<endl;
        cas++;
    }
}