#include <bits/stdc++.h>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    int c=1;
    while(c<=test_cases){
        int num,chicks,barn,time;
        cin>>num>>chicks>>barn>>time;
        vector<int>positions(num);
        vector<int>speeds(num);
        int ans=0,done=0;
        int obs=0;
        for(int i=0;i<num;i++){
            cin>>positions[i];
        }
        for(int i=0;i<num;i++){
            cin>>speeds[i];
        }
        
        for(int i=num-1;i>=0 && done<chicks ;i--){
            if(barn-positions[i]>speeds[i]*time){
                obs++;
            }
            else{
                ans+=obs;
                done++;
            }
        }
        
        cout<<"Case #"<<c++<<": ";
        if(done<chicks){
            cout<<"IMPOSSIBLE"<<"\n";
        }
        else{
            cout<<ans<<"\n";
        }
    }
}