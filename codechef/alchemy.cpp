#include<iostream>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int  N,H,Y1,Y2,L;
        cin>>N>>H>>Y1>>Y2>>L;
        int type,X;
        int count=0;
        int i=0;
        while(i<N){
            cin>>type>>X;
            if(type==1){
                if(H-Y1>X){
                   L--; 
                }
            }
            else{
                if(H+Y2<X){
                    L--;
                }
            }
            if(L>0){
                count++;
            }
            i++;
        }
        cout<<count--<<endl;
    }
}