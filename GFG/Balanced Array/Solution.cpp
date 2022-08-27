/*
Question :- https://practice.geeksforgeeks.org/problems/balanced-array07200720/1?category%5B%5D=Arrays&category%5B%5D=Arrays&page=1&query=category%5B%5DArrayspage1category%5B%5DArrays

Solution :- 
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int minValueToBalance(int array[], int n)
    {
       int LeftSum = 0;
       int RightSum = 0;
       for(int i=0; i < n; i++)
       {
           if(i < n/2)
           {
               LeftSum += array[i];
           }
           else
           RightSum += array[i];
       }
      
       if((LeftSum - RightSum) > 0)
       {
           return (LeftSum - RightSum);
       }
       else if((LeftSum - RightSum) < 0) 
       {
           return (RightSum - LeftSum);
       }
    }
};



//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.minValueToBalance(a,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends