/*
Question :-  https://www.codechef.com/submit/CWIREFRAME

Solution :- 
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n , m , x;
	    cin >> n >> m >> x;
	    int Total_length = 2 * m + 2 * n;
	    int Total_cost = Total_length * x ; 
	    cout << Total_cost << endl;
	}
	return 0;
}
