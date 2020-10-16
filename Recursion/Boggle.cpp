#include<bits/stdc++.h>
using namespace std;
#define M 3 
#define N 3 

set<string>s;

int index_row[]={-1,0,-1,1,0,1,-1,1};
int index_col[]={-1,-1,1,-1,1,1,0,0};

string dictionary[] = { "GEEKS", "FOR", "QUIZ", "GO" }; 

int n = 4;

bool isSafe(int row,int col,bool visited[M][N]){
    if((row>=0) && (col>=0) && (row<M) && (col<N) && (visited[row][col]==false)){
        return true;
    }
    return false;
}

bool isWord(string& str) 
{ 
    for (int i = 0; i < n; i++) 
        if (str.compare(dictionary[i]) == 0) 
            return true; 
    return false; 
} 

void findWordsUtil(char boggle[M][N],bool visited[M][N],int row,int col,string op){
    if(isWord(op))s.insert(op);
    for(int i=0;i<8;i++){
            int r=row+index_row[i];
            int c=col+index_col[i];
            if(isSafe(r,c,visited)){
                op+=boggle[r][c];
                visited[r][c]=true;
                findWordsUtil(boggle,visited,r,c,op);
                op.erase(op.length()-1);
                visited[r][c]=false;
            }
    }   
}

void findWords(char boggle[M][N]) 
{ 
    bool visited[M][N] = { { false } }; 
    string str = ""; 
    // Unlike rat i a maze we will need to consider each char as a starting point.
    for (int i = 0; i < M; i++) 
        for (int j = 0; j < N; j++) 
            findWordsUtil(boggle, visited, i, j, str); 
} 
int main(){
     char boggle[M][N] = { { 'G', 'I', 'Z' }, 
                          { 'U', 'E', 'K' }, 
                          { 'Q', 'S', 'E' } }; 
  
    cout << "Following words of dictionary are present\n"; 
    findWords(boggle); 
    for(string str:s){
        cout<<str<<"\n";
    }
    return 0; 
}