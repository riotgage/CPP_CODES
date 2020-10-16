#include <bits/stdc++.h> 
using namespace std; 

struct time{
    int start;
    int end;
};

bool comp(pair<struct time, int>p1 ,pair<struct time, int> p2){
    return p1.first.start<p2.first.start;
}

vector<pair<struct time, int>> sortArr(vector<struct time> &arr, int n) 
{ 
   
    vector<pair<struct time, int> > vp;  
    for (int i = 0; i < n; ++i) { 
        vp.push_back(make_pair(arr[i], i)); 
    } 
  
    // Sorting pair vector 
    sort(vp.begin(), vp.end(),comp); 
    return vp;
} 


int main(){
    int test_cases;
    cin>>test_cases;
    int cas=1;
    while(cas<=test_cases){
        
        int n;
        cin>>n;
        bool flag=false;
        char *s=new char[n];
        int C_current_end=0;
        int J_current_end=0;
        struct time temp;
        vector<struct time>t;
        for(int i=0;i<n;i++){
            cin>>temp.start;
            cin>>temp.end;
            t.push_back(temp);
        }
        vector<pair<struct time, int>> sorted_time=sortArr(t,t.size());
        for(int i=0;i<sorted_time.size();i++){
            if(sorted_time[i].first.start>=C_current_end){
                s[sorted_time[i].second]='C';
                C_current_end=sorted_time[i].first.end;
            }
            else if(sorted_time[i].first.start>=J_current_end){
                s[sorted_time[i].second]='J';
                J_current_end=sorted_time[i].first.end;
            }
            else{
                flag=true;
                break;
            }
        }

        string str(s);
        if(flag){
            cout<<"Case #"<<cas<<": "<<"IMPOSSIBLE"<<endl;
        }
        else{
            cout<<"Case #"<<cas<<": ";
            for(int i=0;i<n;i++){
                cout<<s[i];
            }
            cout<<endl;
        }
        cas++;
    }
}