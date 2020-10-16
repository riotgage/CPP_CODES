#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int tables,ord_num,temp;
        vector<int>orders;
        map<int,int>occuurence;
        set<int>set_current;
        int occupied=0,cleans=0;
        cin>>tables>>ord_num;
        for(int i=0;i<ord_num;i++){
            cin>>temp;
            orders.push_back(temp);
            occuurence[temp]++;
        }
        for(int i=0;i<ord_num;i++){
            int order=orders[i];
            if(set_current.find(order)==set_current.end()){         //this order is not being served currently
                if(occupied<tables){                                //some table is still not occupied
                    occupied++;
                    set_current.insert(order);
                }
                else{   
                    int min=INT32_MAX,index;                                            // all tables are occupied ,we must vacat one.
                    for(auto itr=set_current.begin();itr!=set_current.end();itr++){     //table with least future occurence
                        if(occuurence[*itr]<=min){
                            index=*itr;
                        }
                    }
                    set_current.erase(index);
                    set_current.insert(order);   
                }
                cleans++;
                occuurence[order]--;

            }
            else{                           //order is currently being served
                occuurence[order]--;
            }
        }
        
        
        cout<<cleans<<"\n";
    }
}