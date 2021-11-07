// Given an array arr[] and an integer K where K is 
// smaller than size of array, the task is to find the 
// Kth smallest element in the given array. 
// It is given that all array elements are distinct

#include <iostream>

#include <queue>

#include <vector>

using namespace std;

void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}


int kthSmallest(int arr[], int n, int k){
    priority_queue < int, vector < int > , greater < int > > minHeap;

    for(int i=0;i<n;i++){
        minHeap.push(arr[i]);            // Add all elements to min heap . this operation is O(log n)
    }
    for(int i=0;i<k-1;i++){
        minHeap.pop();                  // Pop frst k-1 elements.this operation is O(log n)

    }

    return minHeap.top();           // return top element. after k-1 pops this is kth element of original array
                                    // this operation is O(1) 
}
int main() {

    int arr[] = {
        12,
        3,
        5,
        7,
        19
    };
    int n = sizeof(arr) / sizeof(arr[0]), k = 3;
    cout << "K'th smallest element is " << kthSmallest(arr, n, k);
    return 0;

}