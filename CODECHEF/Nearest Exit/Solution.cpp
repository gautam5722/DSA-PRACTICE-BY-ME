/*
Question :- https://www.codechef.com/submit/NEARESTEXIT
Solution :- 
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int x;
	    cin >> x;
	    if(x <= 50)
	    {
	        cout << "LEFT" << endl;
	    }
	    else 
	        cout << "RIGHT" << endl;
	}
	return 0;
}
