/*
QUESTION :-  https://practice.geeksforgeeks.org/problems/c-if-else-decision-making4138/1

SOLUTION :- 
*/

class Solution{   
public:
    string compareFive(int n){
        if(n > 5)
        {
            cout << "Greater than 5";
        }
        else if(n < 5)
        {
            cout << "Less than 5";
        }
        else
        {
            cout << "Equal to 5";
        }
    }
};

