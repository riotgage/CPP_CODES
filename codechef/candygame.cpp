#include<bits/stdc++.h>
using namespace std;
#define limit 1000000007
int main(){
    int test_cases;
    cin>>test_cases;
    while (test_cases--){
        int n,q;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            nums[i]=t;
        }
        cin>>q;
        while(q--){
            int query;
            cin>>query;
            long long int ans=0;
            for(int i=1;i<=query;i++){
                int index=((i-1)%n);
                if(nums[index]==1){
                    ans
                }
                if(nums[index]%2){
                    if(index==query-1 || index==n-1){
                        ans+=nums[index]%limit;
                    }
                    else {
                        ans=(ans+nums[index]-1)%limit;
                    }
                }
                else{
                    if(index==n-1){
                        ans=(ans+nums[index]-1)%limit;
                    }
                    else ans=(ans+nums[index])%limit;
                }
            }
            cout<<ans<<"\n";
        }

    }
}