#include<bits/stdc++.h>
using namespace std;

long long int dp[4020][4020];
long long int p[4020];

bool compare(long long int x, long long int y){
    return x>y;
}
#define infinity 100000000
long long int solve(long long int index,long long int occ,long long int n,long long int k,vector<long long int>&boxes){
    if(occ>=k && (p[index]-occ>=k)){
        return 0;
    }
    else if(index>=n)return infinity;
    else if(dp[index][occ]!=-1)return dp[index][occ];

    long long int op1=solve(index+1,min(occ+boxes[index],p[index]-occ),n,k,boxes);
    long long int op2=solve(index+1,min(p[index]-occ+boxes[index],occ),n,k,boxes);
    dp[index][occ]=1+min(op1,op2);
    return dp[index][occ];
}
int main(){
    long long int test_cases;
    cin>>test_cases;
    while(test_cases--){
        long long int n,k;
        cin>>n>>k;
        vector<long long int>boxes(n);

        for(long long int i=0;i<n;i++){
            cin>>boxes[i];
        }
        if(n==1){           // One box , not possible
            cout<<"-1"<<"\n";
            continue;
        }
        //sort(boxes.begin(),boxes.end(),compare);
        // It works faster without comapre, How ?????
        sort(boxes.begin(),boxes.end());
        for(int i=0;i<n/2;i++){
            swap(boxes[i],boxes[n-i-1]);
        }
        
        for(long long int i=0;i<=n+10;i++){
            p[i]=0;
            for(long long int j=0;j<=k+10;j++){
                dp[i][j]=-1;
            }
        }
        for(long long int i=1;i<=n;i++){
            p[i]=p[i-1]+boxes[i-1];
        }
        long long int ans=solve(0,0,n,k,boxes);
        if(ans>1e7)cout<<-1<<"\n";
        else cout<<ans<<"\n";
    }
}