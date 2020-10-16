#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int n;
        cin>>n;
        int temp,odd=0,even=0;
        for(int i=0;i<n;i++){
            cin>>temp;
            if(temp%2!=i%2){
                if(i%2)
                    odd++;
                else
                    even++;
            }
        }
        if(odd-even==0){
            cout<<odd<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }

    }
}