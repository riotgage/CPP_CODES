#include<bits/stdc++.h>
using namespace std;

bool isCorner(long long int  x,long long int  y,long long int  N){
    if((x==0 || x==N) && (y==0 && y==N))return true;
    return false;
}

void shoot(long long int  &x,long long int  &y,long long int  hori,long long int  vert,long long int  N){
    long long int targetx=(hori>0)?N:0;
    long long int targety=(vert>0)?N:0;
    targety=abs(targety-y);
    targetx=abs(targetx-x);
    long long int  min_steps=min(targetx,targety);

    x=x+min_steps*hori;
    y=y+min_steps*vert;

}

int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        long long int  N,k,x,y;
        cin>>N>>k>>x>>y;
        long long int  hori=1,vert=1;
        unordered_map<int,pair<int,int>>mapping;
        for(int i=0;i<4;i++){
            shoot(x,y,hori,vert,N);
            mapping[i]=make_pair(x,y);
            if(isCorner(x,y,N)){
                break;
            }

            if(x==0 || x==N){
                hori*=-1;
            }
            else if(y==0 || y==N){
                vert*=-1;
            }
        }
        if(isCorner(x,y,N)){
                cout<<x<<" "<<y<<"\n";
                break;
        }
        pair<int ,int>ans=mapping[(k-1)%4];
        cout<<ans.first<<" "<<ans.second<<"\n";
    }
}