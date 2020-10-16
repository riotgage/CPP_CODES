#include<bits/stdc++.h>
using namespace std;
vector<int> row_index={0,1};
vector<int> row_col={1,0};
bool isSafe(int row,int col,bool visited[4][4]){
    if(row>=0 && col>=0 && row<4 && col<4 && (visited[row][col]==false))return true;
    return false;
}
bool checkWordImpl(char matrix [4][4],bool visited [4][4],string word,string op,int row,int col){
    if(op==word)return true;
    for(int i=0;i<row_col.size();i++){
        int curr_row=row+row_index[i];
        int curr_col=col+row_col[i];
        if(isSafe(curr_row,curr_col,visited)){
            op+=matrix[curr_row][curr_col];
            visited[curr_row][curr_col]=true;
            if(checkWordImpl(matrix,visited,word,op,curr_row,curr_col))return true;
            op.erase(op.size()-1);
            visited[curr_row][curr_col]=false;

        }
    }
}

bool checkWord(char matrix [4][4],string word){
    string op="";
    bool visited[4][4]={{false}};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            visited[i][j]=true;
            op+=matrix[i][j];
            if(checkWordImpl(matrix,visited,word,op,i,j))return true;
            op="";
        }
    }
    return false;

}
int main(){
    char matrix [4][4]={{'F', 'A', 'C', 'I'},
                        {'O', 'B', 'Q', 'P'},
                        {'A', 'N', 'O', 'B'},
                        {'M', 'A', 'S', 'S'}};
    string word;
    cin>>word;
    cout<<checkWord(matrix,word);
}