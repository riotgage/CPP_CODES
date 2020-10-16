#include<bits/stdc++.h>
using namespace std;
map<int,int>parent;
int find(int n){
    if(parent.find(n)==parent.end()){
        throw "Key not found";
        return -1;
    }
    if(n==parent[n])
        return n;
    return find(parent[n]);
}

void uni(int a,int b){
       try{ 
           a=find(a);
            b=find(b);
        }
        catch(string s){
            cout<<s;
            return;
        }
        if(a==b)return;

        parent[a]=b;
}
int main(){
    int size;
    cin>>size;
    int num;
    int p;
    for(int i=0;i<size;i++){
        cout<<"\nEnter number: ";
        cin>>num;
        cout<<"\nEnter parent: ";
        cin>>p;
        parent[num]=p;
    }
    auto itr=parent.begin();
    cout<<"Before Union\n";
    cout<<"Child\t"<<"Parent\n";
    for(;itr!=parent.end();itr++)
        cout<<itr->first<<"\t"<<itr->second<<"\n";
    cout<<find(10);
    cout<<find(100);
    uni(100,12);
    cout<<"After Union\n";
    itr=parent.begin();
    cout<<"Child\t"<<"Parent\n";
    for(;itr!=parent.end();itr++)
        cout<<itr->first<<"\t"<<itr->second<<"\n";
    
}