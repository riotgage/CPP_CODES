#include<iostream>
#include<vector>
using namespace std;

class Queue{
    private:
        vector<int> data;
        int p_start;
    public:
        int isEmpty(){
            return data.size()<p_start;
        }
        Queue(){
            p_start=-1;
        }
        bool enQueue(int num){
            data.push_back(num);
            if(p_start==-1){
                p_start=0;
            }
            return true;
        }       
        bool deQueue(){
            if(!isEmpty()){
                int temp=data[p_start];
                p_start++;
                return true;
            }
            return false;
        }

};
int main(){
    
}