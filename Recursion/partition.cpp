#include<bits/stdc++.h>
using namespace std;

bool isSubset(vector<int> set,int sum){
    int n=set.size();
    bool dp[n+1][sum+1];
    for(int i=0;i<n+1;i++){
        dp[i][0]=true;
    }
    for(int j=1;j<sum+1;j++){
        dp[0][j]=false;
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(set[i-1]<=j){
                dp[i][j]=dp[i-1][j]|| dp[i-1][j-set[i-1]];
            }
            else dp[i][j]=dp[i-1][j];
        }
    }
    for (int i = 0; i <= n; i++)  
    {  
        for (int j = 0; j <= sum; j++)  
            cout<<dp[i][j]<<"\t";  
        cout<<"\n";  
    }
    return dp[n][sum];
}

bool isPartitioned(vector<int> set){
    int sum=0;
    for(int i:set)sum+=i;
    cout<<sum<<"\n";
    if(sum%2==1)return false;
    return isSubset(set,sum/2);
}

int main(){
    vector<int> set = { 2,6, 5, 3 }; 
    cout<<isPartitioned(set);
}   