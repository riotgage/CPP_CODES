// given a matrix , sorted br row and by column find a element.

#include<bits/stdc++.h>
using namespace std;
pair<int,int> search(vector<vector<int>> nums,int elem){
    int i=0;
    int j=nums[0].size()-1;
    while(i>=0 && j<=nums[0].size()-1 && j>=0 && i<=nums.size()-1){
        if(nums[i][j]==elem)return make_pair(i,j);
        else if(nums[i][j]>elem){
            j--;
        }
        else{ 
            i++;
        }
    }
    return make_pair(-1,-1);
}
int main(){
    int row,col,target;
   
    target=3;
    vector<vector<int>> nums={{1,2,3,4}};
    pair<int,int> p=search(nums,target);
    cout<<"i: "<<p.first<<"\t j: "<<p.second;
}
