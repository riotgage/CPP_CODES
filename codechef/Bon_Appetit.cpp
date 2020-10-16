#include <bits/stdc++.h>
using namespace std;

bool compare (const pair<int,pair<int,int>>&a,const pair<int,pair<int,int>>&b){
    
    if(a.first != b.first ) return a.first < b.first;
    return a.second.second < b.second.second;
}

int main() {
    int t;
    cin>>t; 
    
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<pair<int,pair<int,int>>> arr;
        
        for(int i=0;i<n;i++)
        {
            int s,f,p;
            cin>>s>>f>>p;
            arr.push_back(make_pair(p,make_pair(s,f)));
        }
        
        sort(arr.begin(),arr.end(),compare);
        int ans =0;
        int j=0;        //compartment
        int t= arr[0].second.second;      
        for(int i=0;i<n;i++){
            if(arr[i].first != j ){             // check if compartment has changed
                j = arr[i].first;               // change compartment
                t = arr[i].second.second;       // first finish time of new compartment
                ans++;                          // change count
            }
            else{
                if(arr[i].second.first >= t){   //if start time of next event is greater than currnt finish time 
                    ans++;                      // update count
                    t = arr[i].second.second;   // update current finish time
                }
            }
        }
        
        cout<<ans<<endl;
        
        
        
        
    }
	return 0;
}
