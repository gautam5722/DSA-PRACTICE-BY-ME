/*
Question :-  https://practice.geeksforgeeks.org/problems/c-operators-relational-set-21407/1

Solution :- 

*/


class Solution{   
public:
    string compareNum(int A,int B){
        if(A > B)
        {
            cout << A << " is greater than " << B ;
        }
        else if(A < B)
        {
            cout << A << " is less than " << B ;
        }
        else
        {
            cout << A  << " is equals to " << B ;
        }
    }
};