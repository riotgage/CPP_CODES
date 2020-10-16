#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int n,x;
        cin>>n>>x;
        vector<int>savings(n);
        for(int i=0;i<n;i++){
            cin>>savings[i];
        }
        sort(savings.begin(),savings.end());
        int sum=0,reforms=0,count=0,i=0,avg;
        while(i<n){
            sum+=savings[i];
            count++;
            avg=,,k]sum/count;
            if(avg>x){
                reforms++;
                count=0;
                sum=0;
            }
            else if(i==x-1){
                reforms++;
            }
            i++;
        }
        cout<<reforms<<"\n";
    }
}
