#include<bits/stdc++.h>
using namespace std;
int first(vector<int>v){
    int start=0;
    int last=v.size()-1;
    int res=-1;
    while(start<=last){
        int mid=start+(last-start)/2;
        if(v[mid]==1){
            res=mid;
            last=mid-1;
        }
        else{
            start=mid+1;
        }

    }
    return res;

}

int main(){
    vector<int>v={0,0,1,1,1,1,1,1};
    cout<<first(v);
}