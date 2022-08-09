/*
Question :-  https://practice.geeksforgeeks.org/problems/key-pair5616/1

solution :-

*/

class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    unordered_set<int>us;
	    for(int i = 0; i < n; i++)
	    {
	        if(us.find(x-arr[i]) != us.end()) {
	            
	            return true;
	        }
	        else
	        {
	            us.insert(arr[i]);
	        }
	    }
	    return false;
	}
};