#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<float>arr={3.2,4.3,5,3,3.5,2.5,1.0};
    sort(begin(arr),end(arr));
    vector<vector<float>>groups;
    int j=0;
    int i=0;
    while(i<7){
        float current=arr[i];
        vector<float>group;
        while(i<7 && arr[i]-current<=1 ){
            
            group.push_back(arr[i]);
            i++;
        }
        groups.push_back(group);
        j++;
    }
    for(int i=0;i<j;i++){
        for(float j:groups[i]){
            cout<<j<<"\t";
        }
        cout<<"\n";
    }
    cout<<"total number of groups: "<<j;

}