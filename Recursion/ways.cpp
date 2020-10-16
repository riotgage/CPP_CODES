#include<bits/stdc++.h>
using namespace std;
vector<int> row_index={0,1};
vector<int> row_col={1,0};
int total=0;
int n;

bool isSafe(int row,int col,vector<vector<bool>>visited){
    if(row>=0 && col>=0 & row<n && col<n && (!visited[row][col]))return true;
    return false;
}

void countWays(vector<vector<int>>matrix,vector<vector<bool>>visited,int row,int col){
    if(row==n-1 && col==n-1){
        total++;
        return;
    }
    for(int i=0;i<row_index.size();i++){
        int curr_row=row+row_index[i];
        int curr_col=col+row_col[i];
        if(isSafe(curr_row,curr_col,visited)){
            visited[curr_row][curr_col]=true;
            countWays(matrix,visited,curr_row,curr_col);
            visited[curr_row][curr_col]=false;
        }
    }
}
int main(){
    cin>>n;
    vector<vector<int>> matrix(n);
    vector<vector<bool>>visited(n);
    for(int i=0;i<n;i++){
        matrix[i]=vector<int>(n,0);
        visited[i]=vector<bool>(n,false);
    }
    countWays(matrix,visited,0,0);
    cout<<total<<"\n";
}