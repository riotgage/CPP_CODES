#include<iostream>
using namespace std;

int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int n;
        cin>>n;
        char board[8][8];
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                board[i][j]='X';
            }
        }
        int whole=n/8;
        int i=0;
        for(i=0;i<whole;i++){
            for(int j=0;j<8;j++){
                board[i][j]='.';
            }
        }
        int rem=n%8;
        for(int j=0;j<rem;j++){
                board[i][j]='.';
        }
        board[0][0]='O';
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cout<<board[i][j];
            }
            cout<<"\n";
        }
                    cout<<"\n";
    }
}