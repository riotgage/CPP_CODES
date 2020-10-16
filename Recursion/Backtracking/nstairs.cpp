#include<iostream>
using namespace std;
int count=0;
int *a;
int stair=0;
void stairs(int current_stair,string s){
    if(current_stair==stair){                   //goal is last stair 
        count++;                                // when reached increment counter
        cout<<s<<"\n";
    }
    else{
        for(int i=1;i<3;i++){
            if(current_stair+i<=stair)          // we can take 1 or 2 or 3 steps at a time
                stairs(current_stair+i,s+to_string(i));        // for each choice check if choice is valid 
        }
    }   
}

int main(){
    cin>>stair;
    string s="";
    a=new int[stair];
    stairs(0,s);
    cout<<count;
}