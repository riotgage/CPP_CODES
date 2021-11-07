// Given an array find the max and min number in array
// {1000, 11, 445, 1, 330, 0,-2}
// ans : 1000, -2

#include <iostream>
using namespace std;

int maxNum;
int minNum;
int main(){
    
    int arr[] = {1000, 11, 445, 1, 330, 0,-2};
    int arr_size = 7;
    maxNum=arr[0];
    minNum=arr[0];

    for(int i=1;i<arr_size;i++){
        if(arr[i]>maxNum)maxNum=arr[i];

        if(arr[i]<minNum)minNum=arr[i];
    
    }

    cout<<"Max Num:\t"<<maxNum;
    cout<<"\nMin Num:\t"<<minNum;
    
}