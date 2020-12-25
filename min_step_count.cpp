/*
You are in an infinite 2D grid where you can move in any of the 8 directions:

You are given a sequence of points and the order in which you need to cover the points. 
Give the minimum number of steps in which you can achieve it. You start from the first point.
*/

#include<bits/stdc++.h>
using namespace std;
struct point{
    int x,y;
};
int minSteps(point p1,point p2){
    return max(abs(p1.x-p2.x),abs(p1.y-p2.y));
}
int coverPoints(point arr[],int n){
    
    int count=0;
    for(int i=0;i<n-1;i++){
        count+=minSteps(arr[i],arr[i+1]);
    }
    return count;

}
int main(){
    point arr[] = { { 0,0}, { 1, 1 }, { 1,2 } }; 
  
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << coverPoints(arr, n); 
}