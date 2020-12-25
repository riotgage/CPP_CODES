/*
Given an unsorted array of integers, find the length of the longest consecutive elements sequence.

For example, given [100, 4, 200, 1, 3, 2], the longest consecutive element sequence is [1, 2, 3, 4]. Return its length: 4.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int>mapping;
    int max=INT_MIN;
    vector<int>nums={1, 9, 3, 10, 4, 20, 2 };
    for(int i:nums){
        mapping[i]=0;
    }
    for(int i:nums){
        if(mapping.find(i-1)!=mapping.end()){
            mapping[i]=mapping[i-1]+1;
            if(mapping[i]>max)max=mapping[i];
        }
        if(mapping.find(i+1)!=mapping.end()){
            mapping[i+1]=mapping[i]+1;
            if(mapping[i+1]>max)max=mapping[i+1];

        }
    }
    cout<<max+1;
}