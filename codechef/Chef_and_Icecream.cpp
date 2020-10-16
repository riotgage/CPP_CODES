#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int n,coin,change;
        cin>>n;
        bool res=true;
        map<int,int>coins;
        coins.insert(make_pair(5,0));
        coins.insert(make_pair(10,0));
        for(int i=0;i<n;i++){
            cin>>coin;
            if(coin==5){
                coins[5]++;
                continue;
            }
            else{   
                change=coin-5;
                if(coins[change]!=0){
                    coins[change]--;
                    coins[coin]++;       
                }
                else{
                    if(change==10 && coins[5]>2){
                        coins[5]-=2;
                        coins[change]++;
                    }
                    else{
                        res=false;
                        
                    }
                }

            }
        }
        if(res)cout<<"YES\n";
        else cout<<"NO\n";
    }
}