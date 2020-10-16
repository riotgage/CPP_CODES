#include<bits/stdc++.h>
using namespace std;
#define n 4
int total=0;
int index_row[]={0,0,1,-1};
int index_col[]={1,-1,0,0};
bool isSafe(int row,int col,int maze[][n],int visited[n][n]){
    if((row>=0) && (col>=0) && (row<4) && (col<4) && (visited[row][col]==0) && (maze[row][col]==1)){
        return true;
    }
    return false;
}
void findPaths(int maze[][n],int visited[n][n],int row,int col,int moves){
    if(row==n-1 && col==n-1){
        total++;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<visited[i][j]<<"  ";
            }
            cout<<"\n";
        }
        cout<<"\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
        visited[n][n]=moves;
        return;
    }
    else{
        for(int i=0;i<4;i++){
            int r=row+index_row[i];
            int c=col+index_col[i];
            if(isSafe(r,c,maze,visited)){
                moves++;
                visited[r][c]=moves;
                findPaths(maze,visited,r,c,moves);
                moves--;
                visited[r][c]=0;
            }
        }
    }
}
void solve(int maze[n][n]){
    int visited[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j]=0;
        }
    }
    visited[0][0]=1;
    findPaths(maze,visited,0,0,1);
    cout<<"total ways: "<<total<<"\n";
}
int main(){
    int maze[n][n] = { { 1, 1, 1, 1 }, 
                       { 1, 0, 0, 0 }, 
                       { 0, 1, 0 ,1 }, 
                       { 1, 0, 1, 1 } }; 
    solve(maze); 
    cout<<"dsaf";
    return 0;
}