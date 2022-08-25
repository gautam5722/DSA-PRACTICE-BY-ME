/*
Question :-  https://www.codechef.com/submit/AVGPROBLEM

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
	    int a,b,c;
	    cin >> a >> b >> c;
	    
	    if(float(a+b)/2 > c)
	    {
	        cout << "YES" << endl;
	    }
	    else
	    {
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
