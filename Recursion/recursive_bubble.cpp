#include<bits/stdc++.h>
using namespace std;
void recurSort(vector<int>&v,int len){
    if(len==1){
        return;
    }
    for(int i=0;i<len-1;i++){
        if(v[i]>v[i+1]){
           swap(v[i],v[i+1]); 
        }
    }
    recurSort(v,len-1);
}
int main(){
    vector<int>v={23,4,12,43,2};
    recurSort(v,v.size());
    for(int i:v){
        cout<<i<<"\n";
    }
}