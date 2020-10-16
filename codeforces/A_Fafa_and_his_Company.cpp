#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int count=0;
    for(int i=1;i<num;i++){
        if((num-i)%i==0){
            count+=1;
        }
    }
    cout<<count;
}