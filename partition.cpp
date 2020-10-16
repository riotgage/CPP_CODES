#include<iostream>
#include<algorithm>
#include<vector>
#include<deque>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(10);    //store data;
    v.pop_back();       //remove last element

    deque<int>q;
    q.push_back(10);    //store data to tail
    q.pop_front();     // remove data from front
}