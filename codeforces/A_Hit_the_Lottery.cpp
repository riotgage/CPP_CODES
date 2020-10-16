#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int sum=0;
    int i=0;
    int change[]={100,20,10,5,1};
    while(num!=0){
        sum+=num/change[i];
        num=num%change[i];
        i++;
    }
    cout<<sum;

}