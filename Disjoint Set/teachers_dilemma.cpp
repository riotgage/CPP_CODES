#include<bits/stdc++.h>
using namespace std;
int *parent;
int find(int a){
    if(parent[a]<0){
        return a;
    }
    else return(parent[a]); 
}

void Union(int a,int b){
    parent[a]-=parent[b];
    parent[b]=a;
}
int main(){
    int n,a,b;

    cin>>n;
    parent=new int[n];
    for(int i=0;i<n;i++){
        parent[i]=-1;
    }
    for(int i=0;i<n;i++){
        cin>>a>>b;
        
        a=find(a);
        b=find(b);
        if(a!=b)Union(a,b);
    }
    int prod=1;
    for(int i;i<n;i++){
        if(parent[i]<0){
            prod*=-1*parent[i];
        }
    }
    cout<<prod;
}