#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int score=0,winner=1;
    int sum1=0;
    int sum2=0;
    int player1,player2;
    for(int i=0;i<N;i++){
        cin>>player1;
        cin>>player2;
        sum1+=player1;
        sum2+=player2;
        if(abs(sum1-sum2)>score){
            score=abs(sum1-sum2);
            if(sum1-sum2>0){
                winner=1;
            }
            else
            {
                winner=2;
            }
            
        }
        
    }

    cout<<winner<<" "<<score;

}