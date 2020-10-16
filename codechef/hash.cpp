#include<bits/stdc++.h>
using namespace std;

class HashTable{
    int size;
    int *arr;
    public:
        HashTable(int size){
            this->size=size;
            arr=new int[size];
            memset(arr,-1,size*(sizeof(arr[0])));
            
        }
        int Allocated_index(int num,int last_index=0){
            int index;
            if(num==0){
                cout<<"NUM"<<endl;
                index=last_index;
                while(true){
                    index=(index+1)%size;
                    cout<<index<<"\t";
                    if(arr[index]==-1){
                        cout<<index<<" ";
                        return index;
                    }
                }
            }
            index=num%size;
            
            if(arr[index]==-1){
                //perfectly working
                cout<<"INDEX-1"<<endl;
                cout<<index<<" ";    
                return index;
            }
            else{
                int dig=num%10;
                cout<<"INDEXFULL"<<endl;
                num=num/10;
                cout<<index<<" ";
                int ind=Allocated_index(num,index);
                if(dig%2==1){
                    cout<<"digitodd"<<"\t"<<ind<<endl;
                    index=(index+ind)%size;
                    cout<<index<<" ";
                    return index;

                }
                else{
                    cout<<"digitEven"<<"\t"<<ind<<endl;
                    if(index<ind){
                        index=index-ind+size+1;
                        cout<<index;
                        if(arr[index]==-1){
                            return index;
                        }
                        else{
                            return Allocated_index()
                        }
                    }
                    else{
                        index=index-ind;
                        cout<<index;
                        return index;
                    }
                }
            }
        }
        void add(int num){
            int index=Allocated_index(num);
            arr[index]=num;
        }

};

int main(){
    int size;
    cin>>size;
    HashTable h(size);
    
    int num=0;
    cin>>num;
    while(num!=-1){
        h.add(num);
        cout<<endl;
        cin>>num;
    }

}