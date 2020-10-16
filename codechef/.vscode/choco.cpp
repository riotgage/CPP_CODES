#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int test_cases;
    cin>> test_cases;
    while(test_cases--){
        int num;
        cin>>num;
        int per_day;
        cin>>per_day;
        vector<int>dates(num);
        for(int i=0;i<num;i++){
            cin>>dates[i];
        }
        sort(dates.begin(),dates.end());
        for(int day=0;day<dates[num-1];day++){
            for(int j=0;j<per_day;j++){
                if(day+1>=dates[day]){
                    cout<<"IMPOSSIBLE\n";
                    
                }
            }
        }
        cout<<"POSSIBLE\n";
    }
}