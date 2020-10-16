#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int n;
        cin>>n;
        int mat[n][n];
        int odd=1,even=2;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j%2==0){
                    mat[i][j]=odd;
                    odd+=2;
                }
                else{
                    mat[i][j]=even;
                    even+=2;
                }
            }   
            
                swap(odd,even);
            
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<"\n";
        }
    }    
}