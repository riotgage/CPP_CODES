#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int john_num,jack_num;
        cin>>john_num>>jack_num;
        int jack_sum=0,john_sum=0;
        vector<int> john(john_num),jack(jack_num);
        for(int i=0;i<john_num;i++){
            cin>>john[i];
            john_sum+=john[i];
        }
        for(int j=0;j<jack_num;j++){
            cin>>jack[j];
            jack_sum+=jack[j];
        }
        sort(john.begin(),john.end());
        sort(jack.begin(),jack.end());
        int count=0,min_index=min(jack_num,john_num);
        int john_index=0,jack_index=jack_num-1;
        while(min_index && john_sum<=jack_sum){
            john_sum+=jack[jack_index]-john[john_index];
            
            jack_sum+=john[john_index]-jack[jack_index];
            john_index++,jack_index--;
            count++;
            min_index--;
        }
        if(john_sum>jack_sum){
            cout<<count<<"\n";
        }
        else{ 
            cout<<-1<<"\n";
        }
    }
}