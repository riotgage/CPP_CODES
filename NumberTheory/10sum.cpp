/*
A number is considered perfect if its digits sum up to exactly 10.

Given a positive integer n, return the n-th perfect number.

For example, given 1, you should return 19. Given 2, you should return 28.*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    int num=19;
    while(count<=n){
        num+=9;
        int sum=0;
        int temp=num;
        while(temp){
            sum+=temp%10;
            temp=temp/10;
        }
        if(sum==10){
            count++;
        }
            
        
    }
    cout<<num;
}