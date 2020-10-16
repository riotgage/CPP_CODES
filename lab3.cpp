#include<bits/stdc++.h>
using namespace std;
class Game{
    public:
        int score[6];
        int maxPoints(int *dice){
            memset(score,0,sizeof(score));
            for(int i=0;i<5;i++){
                score[dice[i]-1]+=dice[i];
            }
            sort(score,score+6);
            cout<<endl;
            return score[5];
        }
        
};
int main(){
    int dice[5];
    ifstream file;
    int i=0;
    file.open("dice.txt");
    while (!file.eof())
    {   
        file>>dice[i];
        i++;
    }
    Game g;
    cout<<"Max Points: "<<g.maxPoints(dice)<<endl;
}