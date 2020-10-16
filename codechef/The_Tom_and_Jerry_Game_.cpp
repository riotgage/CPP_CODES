#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int x) {  
    return x && (!(x&(x-1)));  
}  
long long int depth(long long int  n,map<long long int ,long long int > &mappings){
    
    if(n==0)return 0;
    if(n%2){
        return 0;
    }
    if(mappings.find(n/2)!=mappings.end()){
        return 1+mappings[n/2];
    }
    mappings[n/2]=depth(n/2,mappings);
    return 1+mappings[n/2];
    
}
int main(){
    long long int test_cases;
    cin>>test_cases;
    map<long long int ,long long int >mappings;
    mappings.insert({2,1});
    while(test_cases--){
        long long int  n;
        cin>>n;
        long long int  res=0;
        if(n&1){        
            res=n/2;
        }
        else if(isPowerOfTwo(n)){
            res=0;
        }
        /*else{          
            if((n/2)&1){                
                res=floor(n/4);
                mappings[n]=1;
            }
            else{                   
                if(mappings[n]==0)
                    mappings[n]=depth(n,mappings);
                
                for(long long int  i=n-4;i>0;i=i-4){
                    long long int  m=depth(i,mappings);
                    if(m>mappings[n]){
                        cout<<i<<"\t"<<m<<"\n";
                        res++;
                    }
                }
            }

        }*/

        else{
            int a=depth(n,mappings);
            int init=pow(2,a+1);
            res=n/init;
        }
        cout<<res<<"\n";
        /*auto itr=mappings.begin();
        while(itr!=mappings.end()){
            cout<<itr->first<<"\t"<<itr->second<<"\n";
            itr++;
        }*/

    }
}
