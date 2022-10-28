#include<iostream>
using namespace std;

// Function to find the Duplicate number

int findDuplicate(int arr[], int n) 
{
    int ans = 0;
    
    //XOR ing all array elements
    for (int i = 0; i < n; i++) {
    	ans ^= arr[i];
    }
	
    //XOR [1, n-1]
    for (int i = 1; i <= n-1; i++) {
    	ans ^= i;
    }
    return ans;
}

int main() {

     int nums[] = { 1, 2, 3, 2 };
     int n = sizeof(nums) / sizeof(nums[0]);
 
    cout << "The duplicate element is " << findDuplicate(nums,n);
 
    return 0;

    
}