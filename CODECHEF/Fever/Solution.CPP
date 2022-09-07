/*
Fever

Question Link :- https://www.codechef.com/START55D/problems/FEVER
Solution ;-
*/

#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int temperature ;
	    cin >> temperature;
	    if(temperature > 98)
	    {
	        cout << "YES" << endl;
	    }
	    else
	        cout << "NO" << endl;
	    
	}
	return 0;
}
