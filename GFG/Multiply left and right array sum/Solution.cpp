/*
QUestion Link :- https://practice.geeksforgeeks.org/problems/multiply-left-and-right-array-sum1555/1?category%5B%5D=Arrays&category%5B%5D=Arrays&page=1&query=category%5B%5DArrayspage1category%5B%5DArrays

Solution:- 
*/

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int multiply(int arr[], int n);


int main() {
	//code
	int t;
	cin>>t;
	while (t--)
	{
	    int n,sum1=0,sum2=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    cout << multiply(a, n) << endl;
	    
	}
	return 0;
}
// } Driver Code Ends


//User function Template for C++

int multiply(int arr[], int n)
{
    // Complete the function
    int leftSum = 0;
    int rightSum = 0;
    for(int i=0; i<n; i++)
    {
        if( i < n/2){
            leftSum += arr[i];
        }
        else
        rightSum += arr[i];
    }
    return (leftSum * rightSum);
}