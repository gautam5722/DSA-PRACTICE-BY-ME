/*
Question :- https://www.codechef.com/submit/ODDPAIRS
Solution :- 

*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    long long int n;
	    cin >> n;

	    if(n % 2 != 0)
	    {
	        cout << ( (n * n-1)/2) << endl;
	    }
	    else
	    {
	        cout << (n*n) / 2 << endl;
	    }
	}
	return 0;
}
