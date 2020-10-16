#include<iostream>
using namespace std;
int main(){
    int l,temp;
    cin>>l;
    for(int i=0;i<l;i++){
        cin>>temp;
        if(temp==1){
            cout<<"HARD";
            return 0;
        }
    }
    cout<<"EASY";
}