#include<bits/stdc++.h>
using namespace std;
int r,c;

bool isSafe(int i,int j,int skill[][]){
    return (i>=0 && i <r && j>=0 && j<c && skill[i][j]!=-1);
}
int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int r,c;
        cin>>r>>c;
        int skill[r][c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>skill[i][j];
            }
        }
        int sum=0;
        bool comp=true;
        int skill_level=0;
        while(comp){
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){

                }
            }
        }
    }
}