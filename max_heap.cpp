#include<iostream>
#include<queue>
using namespace std;
class myComparator
{
public:
    int operator() (int p1, int p2)
    {
        return p1 < p2;
    }
};
int main(){
    priority_queue<int,vector<int>,myComparator>qp;
    qp.push(10);
    qp.push(100);
    qp.push(43);
    
    while(! qp.empty()){
        cout<<qp.top()<<"\t";
        qp.pop();
    }
}