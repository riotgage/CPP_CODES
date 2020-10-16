#include<iostream>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int n,q;
        cin>>n>>q;
        int current=0;
        int sum=0;

        for(int i=0;i<q;i++){
            int start,end;
            cin>>start>>end;
            sum+=abs(current-start);
            current=start;
            sum+=abs(current-end);
            current=end;
        
        }
        cout<<sum<<"\n";
    }
}