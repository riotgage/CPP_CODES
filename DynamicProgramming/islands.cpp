#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    vector<vector<int>>mat={{1,0,0,0,0},
                            {0,0,1,1,0},
                            {0,1,1,0,0},
                            {0,0,0,0,0},
                            {1,1,0,0,1},
                            {1,1,0,0,1}};
    vector<int> row_co={1,-1,0,0};
    vector<int> col_co={0,0,1,-1};
    int row=6,col=5;
    int count=0;
    vector<vector<int>>visited(6,vector<int>(5,-1));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(mat[i][j]==1 && visited[i][j]==-1){
                count++;
                queue<pair<int,int>>q;
                q.push({i,j});
                while(!q.empty()){
                    int len=q.size();
                    for(int k=0;k<len;k++){
                        pair<int,int> p=q.front();
                        visited[p.first][p.second]=count;
                        q.pop();
                        for(int l=0;l<4;l++){
                            int new_row=p.first+row_co[l];
                            int new_col=p.second+col_co[l];
                            if(new_row>=0 && new_row<row && new_col>=0 && new_col<col && visited[new_row][new_col]==-1 && mat[new_row][new_col]){
                                q.push({new_row,new_col});
                            }
                        }
                    }
                }
            }
            
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){ 
            cout<<visited[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<count;
}