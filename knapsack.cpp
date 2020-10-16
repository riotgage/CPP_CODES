// Discrete Knapsack problem

#include<iostream>
#include<vector>
using namespace std;

int knapsack(int weight,vector<int> values,vector<int> weights){
    vector<int>v(0,weight+1);
    v.push_back(0);

    for(int i=1;i<=weight;i++){
        cout<<"Weights\n";
        for(int j=0;j<values.size();j++){
            if(weights[j]<=i){
                cout<<"Inside\n";
                int val=v[i-weights[j]]+values[j];
                if(val>v[i]){
                    cout<<"Smaller\n";
                    v[i]=val;
                }
            }
       }
    }
    return v[weight];
}

int main(){
    int weight;
    cin>>weight;
    vector<int> values={12,5,47,21};
    vector<int> weights={43,21,54,12};
    cout<<"Maximum value: "<<knapsack(weight,values,weights);
}