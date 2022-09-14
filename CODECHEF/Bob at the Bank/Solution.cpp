/*
Question :- https://www.codechef.com/submit/BOBBANK
Solution :- 
*/
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int w , x , y , z;
	    cin >> w >> x >> y >> z;
	    
	    int currentAccBalance = w;
	    int end_of_month_balance = x-y;
	    int finalAccBalance = currentAccBalance + end_of_month_balance * z;
	    
	    cout << finalAccBalance << endl;
	}
	return 0;
}
