#include<iostream>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){

        int income,tax_rate,net_income;
        int slab_a,slab_b,slab_c,slab_d,slab_e;
        slab_a=(0.05*(500000-250000));
        slab_b=(0.10*(750000-500000));
        slab_c=(0.15*(1000000-750000));
        slab_d=(0.20*(1250000-1000000));
        slab_e=(0.25*(1500000-1250000));
        cin>>income;
        if(income<=250000){
            net_income=income;
        }
        else if(income<=500000){
            net_income=income-(0.05*(income-250000));
        }
        else if(income<=750000){
            net_income=income-(0.1*(income-500000)+slab_a);
        }
        else if(income<=1000000){
            net_income=income-(0.15*(income-750000)+slab_a+slab_b);
        }
        else if(income<=1250000){
            net_income=income-(0.2*(income-1000000)+slab_a+slab_b+slab_c);
        }
        else if(income<=1500000){
            net_income=income-(0.25*(income-1250000)+slab_a+slab_b+slab_c+slab_d);
        }
        else 
            net_income=income-(0.3*(income-1500000)+slab_a+slab_b+slab_c+slab_d+slab_e+slab_e);

        cout<<net_income;
    }
}
