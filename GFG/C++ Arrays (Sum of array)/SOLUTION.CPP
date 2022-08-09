/*
QUESTION :-   https://practice.geeksforgeeks.org/problems/c-arrays-sum-of-array-set-14805/1

SOLUTION :- 
*/

class Solution{
    public:
    int getSum(int arr[], int n) {
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            sum += arr[i];
        }
        return sum;
    }   
};