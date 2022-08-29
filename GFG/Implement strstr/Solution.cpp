/*
Question :- https://practice.geeksforgeeks.org/problems/implement-strstr/1?page=1&difficulty[]=-1&category[]=Strings&sortBy=submissions

Solution :- 

*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
    int n = s.length();
    int m = x.length();
    for(int i = 0; i <= n-m; i++)
    {
        int j;
        for( j=0; j<m; j++)
        {
            if(s[i+j] != x[j])
                break;
        }
        if(j==m){
        return i;
        }
        
    }
    return -1;
}