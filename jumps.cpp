#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    int c=1;
    while(test_cases--){
    
        int goalx,x=0,goaly,y=0;
        int dirx=-1,diry=-1;
        if(x>0)dirx=1;
        if(y>0)diry=1;
        cin>>goalx>>goaly;
        int dist=abs(goalx)+abs(goaly)+abs(x)+abs(y);
        if(dist%2==0){
            cout<<"Case #"<<c<<": IMPOSSIBLE\n";
            continue;
        }
        int steps=0;
        int sum=0;
        int i=1;
        while(sum<dist){
            sum+=pow(2,i-1);
            steps++;
            i++;
        }
        string ans="";
        cout<<"dist"<<dist<<"\n";
        cout<<"steps"<<steps<<"\n";
        
        for(i=1;i<=steps;i++){
            sum-=pow(2,i-1);
            if(dist-dirx*pow(2,i-1)==sum){
                x+=dirx*pow(2,i-1);
                if(dirx>0){
                    ans+="E";
                }
                else{
                    ans+="W";
                }
            }
            else if(dist+dirx*pow(2,i-1)==sum){
                x-=dirx*pow(2,i-1);
                if(dirx>0){
                    ans+="W";
                }
                else{
                    ans+="E";
                }
            }
            else if(dist-diry*pow(2,i-1)==sum){
                y+=diry*pow(2,i-1);

                if(diry>0){
                    ans+="S";
                }
                else{
                    ans+="N";
                }
            }
            else if(dist+diry*pow(2,i-1)==sum){
                y+=diry*pow(2,i-1);
                if(diry>0){
                    ans+="N";
                }
                else{
                    ans+="S";
                }
            }
            dist=abs(goalx)+abs(goaly)+abs(x)+abs(y);      
        }
        if(x!=goalx && y!=goaly){
            cout<<"Case #"<<c<<ans<<": IMPOSSIBLE\n";
        }else {
            cout<<"Case #"<<c<<" "<<ans<<"\n";
       }
        c++;
    }
}