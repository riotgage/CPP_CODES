#include<iostream>
using namespace std;

int countSetBits(int n) { 
    unsigned int count = 0; 
    while (n) { 
        n &= (n - 1); 
        count++; 
    } 
    return count; 
} 

int main(){
    int test_cases;
    cin>>test_cases;
    int n,q,p;
    int *a;
    int *b;
    while(test_cases--){
        cin>>n;
        cin>>q;
        a=new int[n];
        b=new int[n];
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        for(int i=0;i<q;i++){
            cin>>p;
            int count=0;
            int count_even=0;
            int count_odd=0;
            for(int j=0;j<n;j++){
                b[j]=a[j]^p;
                count=countSetBits(b[j]);
                if(count%2){
                    count_odd++;
                }else{
                    count_even++;
                }
            }
            cout<<count_even<<" "<<count_odd<<endl; 
        }
    }
}