#include<iostream>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    int len;
    string s;
    int axis=-1;
    char c;
    int x=0;
    int y=0;
    while(test_cases--){
        x=0;
        y=0;
        axis=-1;
        cin>>len;
        cin>>s;
        for(char c:s){
            if(c=='L'){
                if(axis!=0){
                    x=x-1;
                    axis=0;
                }
            }
            else if(c=='R'){
                if(axis!=0){
                    x=x+1;
                    axis=0;
                }
            }
            if(c=='U'){
                if(axis!=1){
                    y=y+1;
                    axis=1;
                }
            }
            else if(c=='D'){
                if(axis!=1){
                    y=y-1;
                    axis=1;
                }
            }
        }
        cout<<x<<" "<<y<<endl;
    }
}