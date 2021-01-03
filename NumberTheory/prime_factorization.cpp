#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;

    cin>>num;
    for(int i=2;i*i<=num;i++){
        if(num%i==0){               // we found factor less sqrtn()
            int cnt=0;
            while(num%i==0){
                cnt++;
                num/=i;             // change n
            }
            cout<<i<<"^"<<cnt<<" "; // factor and its power ,now loop again 
                                    //to find next factor <sqrt(n)
        }
    }
    if(num>1){          // for loop broke so num is prime 
        cout<<num<<"^"<<1<<" ";
    }
}