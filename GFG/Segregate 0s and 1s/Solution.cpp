/*
Question :- https://practice.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1?category%5B%5D=Arrays&category%5B%5D=Arrays&page=2&query=category%5B%5DArrayspage2category%5B%5DArrays

Solution:-

*/

//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    void segregate0and1(int array[], int n) {
        // code here
       int counting = 0;
        for(int i=0; i<n; i++)
        {
           if(array[i] == 0)
           {
               counting++;
           }
        }
        for(int i=0; i<n; i++)
        {
            if(i < counting)
            {
                array[i]=0;
            }
            else
            array[i] = 1;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.segregate0and1(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends