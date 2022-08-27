/*
Question :- https://practice.geeksforgeeks.org/problems/product-of-maximum-in-first-array-and-minimum-in-second3943/1?category%5B%5D=Arrays&amp%3Bcategory%5B%5D=Arrays&amp%3Bpage=1&amp%3Bquery=category%5B%5DArrayspage1category%5B%5DArrays

Solution :- 
*/


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
        long long find_multiplication(int a[], int b[], int n, int m)
    {
        // Complete the function
        int maxximum = INT_MIN;
        int minimum = INT_MAX;
        for(int i=0; i<n;i++)
        {
            maxximum = max(maxximum, a[i]);
        }
        for(int i=0; i<m; i++)
        {
            minimum = min(minimum, b[i]);
        }
        return (maxximum * minimum);
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
        for(int i=0;i<n;i++)    cin>>a[i];
        
        int m;
        cin>>m;
        int b[m];
        for(int i=0;i<m;i++)    cin>>b[i];
        
        
        Solution ob;
        cout<<ob.find_multiplication(a, b, n, m)<<endl;

    }
    return 0;
}
// } Driver Code Ends