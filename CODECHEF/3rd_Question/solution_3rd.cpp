/*

Question Links:-  https://www.codechef.com/submit/MILEAGE

Solution :- 
*/

#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
	   // int N,X,Y,A,B;
	   float rd, pp, dp, opk, odk;
	    cin >> rd >> pp >> dp >> opk >> odk;
	    float petrol_dist  = rd / opk;
	    float petrol_price = petrol_dist * pp;
	    
	    float diesel_dist  = rd / odk;
	    float diesel_price = diesel_dist * dp;
	    
	    if(petrol_price > diesel_price){
	        cout << "DIESEL" << endl;
	    }
	    else if(petrol_price < diesel_price){
	        cout << "PETROL" << endl;
	    }
	    else{
	        cout << "ANY" << endl;
	    }
	    
	}
	return 0;
}
