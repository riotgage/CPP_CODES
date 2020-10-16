#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int *cost;
    int *fruits;
    int *price;
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int no_of_baskets,no_of_fruits;
        cin>>no_of_baskets>>no_of_fruits;
        cost=new int[no_of_fruits+1];
        fruits=new int[no_of_baskets+1];
        price=new int[no_of_baskets+1];
        memset(cost,0,no_of_fruits+1);
        int num;
        for(int i=1;i<=no_of_baskets;i++){
            cin>>num;
            fruits[i]=num;
        }

        for(int j=1;j<=no_of_baskets;j++){
            cin>>price[j];
            cost[fruits[j]]+=price[j];
        }


        int min=10000;
        int index=-1;
        for(int i=1;i<=no_of_baskets;i++){
            if(min==0){
                min=cost[i];
            }
            else if(cost[i]!=0 && min>cost[i]){
                min=cost[i];
                index=i;
            }
        }
       
        cout<<min<<endl;
    }

   
    
}