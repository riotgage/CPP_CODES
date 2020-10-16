#include<bits/stdc++.h>
using namespace std;
int total=0;
int n,k;
set<set<int>>output;
bool issafe(vector<int>count,set<int>op,int i){
    if(count[i]>0 && op.find(i)==op.end())return true;
    return false;
}
void generate(vector<int>count,set<int>op){
    if(op.size()==k){
        output.insert(op);
        return;
    }
    for(int i=0;i<count.size();i++){
        if(issafe(count,op,i)){
            op.insert(i);
            count[i]--;
            generate(count,op);
            op.erase(i);
            generate(count,op);
            count[i]++;
        }
    }
}


int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){        
        output.clear();
        cin>>n>>k;
        vector<int>count(n);
        for(int i=0;i<n;i++){
            cin>>count[i];
        }
        set<int>op;
        generate(count,op);
        cout<<output.size()<<"\n";
    }
}