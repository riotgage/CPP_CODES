#include<bits/stdc++.h>
using namespace std;
void isSubset(vector<int> set,int sum){
    int n=set.size();
    bool subset[n+1][sum+1];
    for(int i=0;i<n+1;i++){
        subset[i][0]=true;
    }
    for(int i=1;i<sum+1;i++){
        subset[0][i]=false;
    }
    for(int i=1;i<n+1;i++){
        for(int s=1;s<sum+1;s++){
            if(set[i-1]>s){
                subset[i][s]=subset[i-1][s];
            }
            else{
                subset[i][s]=(subset[i-1][s]) ||( subset[i-1][s-set[i-1]]);
            }
        }
    }
    cout<<subset[n][sum];
}
int main(){
    vector<int> set = { 3, 34, 4, 12, 5, 2 }; 
    int sum = 9; 
    isSubset(set,sum);
}   