#include<iostream>
#include<climits> 
using namespace std;

int maxSubArraySum(int a[], int size,int sta,int l) 
{ 
    int max_so_far = INT_MIN, max_ending_here = 0, 
       start =0, end = 0, s=0; 
  
    for (int i=sta; i< l+1; i++ ) 
    { 
        max_ending_here += a[i]; 
  
        if (max_so_far < max_ending_here) 
        { 
            max_so_far = max_ending_here; 
            start = s; 
            end = i; 
        } 
  
        if (max_ending_here < 0) 
        { 
            max_ending_here = 0; 
            s = i + 1; 
        } 
    } 
    return max_so_far;
    
} 
int main(){

    int test_cases;
    cin>>test_cases;
    int n,q;
    int *Beauty;
    int first,last;
    char c;
    while(test_cases--){
        cin>>n>>q;
        Beauty=new int[n];
        for(int i=0;i<n;i++){
            cin>>Beauty[i];
        }
        for(int i=0;i<q;i++){
            cin>>c>>first>>last;
            if(c=='Q'){
                first--;
                last--;
                int r=maxSubArraySum(Beauty,first-last+1,first,last);
                cout<<r<<endl;
            }
            else if(c=='U'){
                Beauty[first-1]=last;
            }
        }
    }

}