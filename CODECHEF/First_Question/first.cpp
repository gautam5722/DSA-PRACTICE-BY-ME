/*
question link :-    https://www.codechef.com/submit/HOTCOLD

Solution:- 
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    
	int temperature;
	cin >> temperature;
	if(temperature > 20){
	    cout << "HOT" << endl;
	}
	else{
	    cout << "COLD" << endl;
	}
	}
	return 0;
}
