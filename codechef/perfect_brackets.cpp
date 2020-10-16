#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<char>s;
    int len;
    cin>>len;
    if(len & 1){
        cout<<"not perfect";
        exit(0);
    }
    int max_depth=0,max_seq=0;
    int depth=0,index_depth=-1;
    int seq=0,index_max_seq=-1;
    char temp;
    for(int i=0;i<len;i++){
        cin>>temp;
        if(temp=='('){
            s.push('('); 
            if(depth==0){
                index_depth=i;
            }
            depth++;
        }
        else{
            if(depth>=max_depth){
                max_depth=depth;
                
            }
            depth=0;
            if(s.empty()){
                cout<<"Not perfect";
                break;
            }
            else{
               s.pop(); 
            }
        }
    }
    if (!s.empty()){
        cout<<"Not perfect";
    }
    cout<<"Max depth "<<max_depth<<endl;
    cout<<"Index"<<index_depth<<endl;
}

