#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    while (test_cases--){
        int num;
        cin>>num;
        vector<int>exp(num);
        for(int i=0;i<num;i++){
            cin>>exp[i];
        }
        sort(begin(exp),end(exp));
        int i=0,j=1,count=0;
        while(i<num){
            if(j>=exp[i]){
                j=0;
                count++;
            }
            i++;
            j++;
            
        }
        cout<<count<<"\n";
    }
    
}