/*Given a list of integers, return the largest product that can be made by multiplying any three integers.*/

/*########################################################
NOT COMPLETE YET
########################################################*/
#include<bits/stdc++.h>
using namespace std;
int product(vector<int> arr){
    int n=arr.size();
    int max_product;
    if (n < 3)
        return -1;
    vector<int> leftMin(n, -1);
    vector<int> rightMin(n, -1);
    vector<int> leftMax(n, -1);
    vector<int> rightMax(n, -1);

    leftMax[1] = arr[0];
    leftMin[1] = arr[0];
    
    for (int i = 2; i < n; i++)
    {
        leftMax[i]= max(leftMax[i-1],arr[i]);
        leftMin[i]= min(leftMin[i-1],arr[i]);
        
    }
        
    rightMax[n-2] = arr[n - 1];
    rightMin[n-2] = arr[n - 1];

    for (int j = n - 3; j >= 0; j--)
    {
        rightMax[j] =max(arr[j+1],arr[j]);
        rightMin[j] =min(arr[j+1],arr[j]);
    }

    for (int i = 1; i < n - 1; i++)
    {
        int max1 = max(arr[i] * leftMax[i] * rightMax[i],
                    arr[i] * leftMin[i] * rightMin[i]);
 
        int max2 = max(arr[i] * leftMax[i] * rightMin[i],
                    arr[i] * leftMin[i] * rightMax[i]);
 
        max_product =  max(max1, max2);
    }
 
    return max_product;

}
int main()
{
    vector<int> nums = { -30, -5, 1, 16, -2 };   
    int max = product(nums);
 
    if (max == -1)
        cout << "No Triplet Exists";
    else
        cout << "Max product is " << max;
 
    return 0;
}