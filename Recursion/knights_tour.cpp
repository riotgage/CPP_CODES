#include<bits/stdc++.h>
using namespace std;

int index_row[]={-2,-2,2,2,-1,-1,1,1};
int index_col[]={1,-1,1,-1,2,-2,2,-1};
#define n 8
bool isSafe(int row,int col,int visited[n][n]){
    if((row>=0) && (col>=0) && (row<8) && (col<8) && (visited[row][col]==0)){
        return true;
    }
    return false;
}

int KnightTOur(int row,int col,int visited[n][n],int moves){
    if(moves==64){
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cout<<visited[i][j]<<"\t";
            }
            cout<<"\n";
        }
        return 1;
    }
    for(int i=0;i<8;i++){
        int r=row+index_row[i];
        int c=col+index_col[i];
        if(isSafe(r,c,visited)){
            moves++;
            visited[r][c]=moves;
            cout<<moves<<"\n";
            if(KnightTOur(r,c,visited,moves)==1)return 1;
            moves--;
            visited[r][c]=0;
        }
    }
    return -1;
}

void solve(){
    int visited[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j]=0;
        }
    }
    visited[0][0]=1;
    KnightTOur(0,0,visited,1);
}
int main(){
    solve();
}