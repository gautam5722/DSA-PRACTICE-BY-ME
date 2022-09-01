/*
Question :- https://practice.geeksforgeeks.org/problems/find-first-repeated-character4108/1
Solution :- 
*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    unordered_set<char> s1;
        string ans = "";
    for(int i=0; i<s.length(); i++)
    {
        if(s1.find(s[i]) != s1.end())
        {
            ans += s[i];
            return ans;
        }
        else
        s1.insert(s[i]);
    }
    return "-1";
}