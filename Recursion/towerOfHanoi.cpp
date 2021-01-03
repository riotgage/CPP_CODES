// Google Tower of Hanoi

#include<iostream>
using namespace std;


void hanoi(int n,char src,char dest,char help){
    if(n==1){
        cout<<"Move from "<<src<<" to "<<dest<<"\n";
        return;
    }
    hanoi(n-1,src,help,dest);
    cout<<"Move from "<<src<<" to "<<dest<<"\n";
    hanoi(n-1,help,dest,src);
    return;
}
int main(){
    int n;
    cin>>n;
    hanoi(n,'s','d','h');
}