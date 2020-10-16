#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    while (test_cases--){
        int size_array;
        int block_size,no_blocks;
        int acces_size;
        cin>>size_array>>block_size>>acces_size;
        int current_block=-1;
        int count=0;
        for(int i=0;i<acces_size;i++){
            int temp;
            cin>>temp;
            int block=int(ceil((temp+1)/block_size));
            if(block!=current_block){
                count++;
                current_block=block;
            }
        }
        cout<<count<<"\n";
    }
}