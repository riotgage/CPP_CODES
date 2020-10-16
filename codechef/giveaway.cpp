#include <iostream>
using namespace std;

int main() {
    
    int test;
    scanf("%d",&test);
    while(test--){
        
        int l,r,k;
        scanf("%d %d %d",&l,&r,&k);
        
        int size=r-l+1;
        if(k<=size){
            printf("%d\n",k);
        }
        else{
             int diff=k-size;
             int num=size-2*diff;
            printf("%d\n",num);
            
        }

    }
	return 0;
}