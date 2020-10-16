#include<iostream>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    int num;
    
    while(test_cases--){
        int i=0,j=0;
        cin>>num;
        int *a=new int[num];
        for(int i=0;i<num;i++){
           cin>>a[i];
        }
        
        while(i<num){
            j=i;
            while(a[j]+1==a[j+1]){
                j++;
            }
            if(j-i>=2){
                cout<<a[i]<<"..."<<a[j];
                if(j!=num-1){
                        cout<<",";
                }
            }
            
            else{
                while(i<=j){
                    cout<<a[i];
                    if(i!=num-1){
                        cout<<",";
                    }
                    i++;
                    
                }   
            }
            i=j+1;
        }
        cout<<endl;
    }
}