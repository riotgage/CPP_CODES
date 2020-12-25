#include<bits/stdc++.h>
using namespace std;


bool ispossible(vector<int>stones,int d){
    int jump=0,last_jump=-1;
    int current=-1;
    cout<<"\nChecking possibility\n";
    for(int i:stones){
        cout<<i<<" ";
    }
    cout<<"\n";
    for(int i=0;i<stones.size();i++){
        if(stones[i]==1){
            last_jump=i;
        }
        jump++;
        if(jump==d){
            current=last_jump;
        }
    }
    current=last_jump;
    cout<<"Curret Position "<<current<<"\n";
    cout<<stones.size()<<"\t"<<current;
    if(current==-1)return false;
    if(current<stones.size()-d){
        return false;}
    return true;
}
int solution(vector<int>nums,int d){
    map<int,set<int>>time;
    int max_time=INT_MIN;
    for(int i=0;i<nums.size();i++){
        time[nums[i]].insert(i);
        if(max_time<nums[i])max_time=nums[i];
    }
    vector<int>stones(nums.size(),-1);
    for(int i=0;i<=max_time;i++){
        for(int index:time[i]){
            stones[index]=1;
        }
        if(ispossible(stones,d)){
            return i;
        }
    }
    
    return -1;
}

int main(){
    int n,d;
    cin>>d;
    vector<int>nums;
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        nums.push_back(t);
    }
    cout<<solution(nums,d);
}