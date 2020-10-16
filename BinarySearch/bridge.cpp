#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> ans;
void criticalUtil(int src,vector<bool> visited,vector<int>disc,vector<int>low,vector<int>parent){
    visited[src]=true;
}
vector<pair<int,int>> critical(int numOfWarehouses,int numOfRoads,vector<pair<int,int>>roads) { 
    vector<bool> visited(numOfWarehouses,false); 
    vector<int>disc(numOfWarehouses); 
    vector<int>low(numOfWarehouses); 
    vector<int>parent(numOfWarehouses,INT_MAX); 

    for (int i = 0; i < numOfWarehouses; i++) 
        if (visited[i] == false) 
            criticalUtil(i, visited, disc, low, parent); 
    return ans;
} 

int main(){

}