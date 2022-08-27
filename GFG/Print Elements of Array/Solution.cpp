/*
Question:-  https://practice.geeksforgeeks.org/problems/print-elements-of-array4910/1?category%5B%5D=Arrays&amp%3Bcategory%5B%5D=Arrays&amp%3Bpage=2&amp%3Bquery=category%5B%5DArrayspage2category%5B%5DArrays

Solution:-
*/

class Solution{
public:
    //Just print the space seperated array elements
	void printArray(int array[], int n) {
	    // code here
	    for(int i=0; i<n; i++)
	    {
	        cout << array[i] << " ";
	    }
	}
};