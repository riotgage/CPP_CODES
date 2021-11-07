// Given an array (or string), the task is to reverse the array/string.
// 1 2 3 4 5 6 
// Reversed array is 
// 6 5 4 3 2 1 

#include <iostream>
using namespace std;


void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}

void reverseArray(int *arr,int size){
    int start=0,end=size-1;
    while(end>start){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
 
int main(){

    int arr[] = {1, 2, 3, 4, 5, 6};
    int size=sizeof(arr)/sizeof(arr[0]);

    reverseArray(arr,size);
    printArray(arr,size);
}