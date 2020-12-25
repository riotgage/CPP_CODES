#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin>>test_cases;
    while (test_cases--){
        int n,k;
        string s;
        cin>>n>>k;
        cin>>s;
        int magnet=0,iron=0;
        int count=0;
        int ans=0;
        while(magnet<n && iron<n){
            if(s[magnet]=='M'){
                if(s[iron]=='I'){
                    count=0;
                    int j=max(iron,magnet);
                    int i=min(iron,magnet);
                    for(;i<=j;i++){
                        if(s[i]==':')
                            count++;
                    }
                    int p=k+1-abs(iron-magnet)-count;
                    if(p>0){
                        ans++;
                        iron++,magnet++;
                    }
                    else{ 
                        if(iron>magnet){
                            magnet++;
                        }
                        else{
                            iron++;
                        }
                    }
                }
                else if(s[iron]=='X'){
                    magnet=iron;
                    magnet++;
                    iron++;
                }
                else {
                    iron++;
                }
            }
            else if(s[magnet]=='X'){
                iron=magnet;
                magnet++;
                iron++;
            }
            else{
                magnet++;
            }
        }
        cout<<ans<<"\n";
    }
}