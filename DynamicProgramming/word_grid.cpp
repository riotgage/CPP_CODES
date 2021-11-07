/*
Given a 2D board of characters and a word, find if the word exists in the grid.

The word can be constructed from letters of sequentially adjacent cell, 
where "adjacent" cells are those horizontally or vertically neighboring.
 The same letter cell may not be used more than once.
*/

#include<bits/stdc++.h>
using namespace std;
vector<int>rowwise={0,1,0,-1};
vector<int>colwise={-1,0,1,0};

bool issafe(int row,int col,vector<vector<bool>>visited){
    if(row>=0 && row<visited.size() && col>=0 && col<visited[0].size() && visited[row][col]==false){
        return true;
    }
    return false;
}

bool findWordUtil(vector<vector<char>>grid,vector<vector<bool>>visited,int row,int col,string word){
    if(word=="")return true;
    if(grid[row][col]==word[0]){
        visited[row][col]=true;
    }
    else return false;
    for(int k=0;k<rowwise.size();k++){
        int new_row=row+rowwise[k];
        int new_col=col+colwise[k];
        if(issafe(new_row,new_col,visited)){
            visited[new_row][new_col]=true;
            word.erase(0);
            if(findWordUtil(grid,visited,new_row,new_col,word)){
                return true;
            }
            word=grid[row][col]+word;
            visited[new_row][new_col]=false;
        }
    }

}

bool findWord(vector<vector<char>>grid,string word){
        vector<vector<bool>>visited(3,vector<bool>(4,false));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==word[0])
                    if(findWordUtil(grid,visited,i,j,word)){
                        return true;
                    }
            }
        }
}
int main(){
    vector<vector<char>>grid={{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    vector<string>words={"ABCB"};
    for(string s:words){
        cout<<s<<"\t"<<findWord(grid,s)<<"\n";
    }
}