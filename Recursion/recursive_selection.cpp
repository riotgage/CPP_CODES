#include<bits/stdc++.h>

using namespace std;

int minI(vector<int>v,int index){

    if(index==v.size()-1){
        return index;
    }
    int k=minI(v,index+1);
    if(v[index]<v[k]){
        return index;
    }
    else{
        return k;
    }
}
void recsort(vector<int>& v,int size,int index=0){
    if(size==index){
        return;
    }

    int min_index=minI(v,index);
    if(min_index!=index){
        swap(v[index],v[min_index]);
    }
    recsort(v,size,index+1);
}
int main(){
    vector<int>v={10,5,2,21,4};
    recsort(v,v.size());
    for(int i:v){
        cout<<i<<"\n";
    }
}
