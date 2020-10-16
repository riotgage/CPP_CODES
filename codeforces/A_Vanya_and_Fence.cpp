#include<iostream>
using namespace std;
int main(){
    int num,height;
    cin>>num>>height;
    int count =0,temp=0;
    for(int i=0;i<num;i++){
        cin>>temp;
        if(temp>height)count++;
    }
    cout<<num+count;
}