#include<bits/stdc++.h>
using namespace std;
struct point{
    long long int x;
    long long int y;
};
int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        long int n;
        cin>>n;
        long long int x,y;
        map<long long int,vector<point>>pointsx;
        map<long long int,vector<point>>pointsy;
        for(long long int i=0;i<4*n-1;i++){
            cin>>x>>y;
            point p;
            p.x=x;
            p.y=y;
            if(pointsx[x].empty()){
                pointsx[x].push_back(p);
            }
            else{
                pointsx.erase(x);
            }
            if(pointsy[y].empty()){
                pointsy[y].push_back(p);
            }
            else{
                pointsy.erase(y);
            }
        }
        auto itr=pointsx.begin();
        x=itr->first;
        itr=pointsy.begin();
        y=itr->first;
        cout<<x<<" "<<y<<"\n";
    }
}