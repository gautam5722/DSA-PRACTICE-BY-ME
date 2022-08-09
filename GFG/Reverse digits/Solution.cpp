/*
QUESTION :-  https://practice.geeksforgeeks.org/problems/reverse-digit0316/1

SOLUTION :-------  
*/

class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    long long int rev = 0;
		    long long int ans = 0;
		    while(n != 0)
		    {
		        rev = n % 10;
		        ans = ans * 10 + rev;
		        n = n / 10;
		    }
		    return ans;
		}
};