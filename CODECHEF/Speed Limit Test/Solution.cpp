/*
Question :- https://www.codechef.com/submit/SPEEDTEST?tab=statement
Solution :- 
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    double A , X;
	    cin >> A >> X;
	    double B, Y;
	    cin >> B >> Y;
	    double aliceSpeed = A / X ;
	    double bobSpeed = B / Y ;
	    
	    if(aliceSpeed < bobSpeed)
	    {
	        cout << "Bob" << endl;
	    }
	    else if(aliceSpeed > bobSpeed)
	    {
	        cout << "Alice" << endl;
	    }
	    else
	        cout << "Equal" << endl;
	}
	return 0;
}
