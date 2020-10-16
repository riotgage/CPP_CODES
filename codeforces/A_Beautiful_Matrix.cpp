#include<iostream>
using namespace std;
int main(){
    int arr[5][5];
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]!=0){
                cout<<abs(3-i-1)+abs(3-j-1);
                exit(0);
            }
        }
    }

}