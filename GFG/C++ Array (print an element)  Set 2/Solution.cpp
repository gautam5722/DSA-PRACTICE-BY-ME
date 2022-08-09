/*
Question :- https://practice.geeksforgeeks.org/problems/c-array-print-an-element-set-25933/1

Solution :---

*/


class Solution{
    public:
    int findElementAtIndex(int array[], int n, int key) 
    {
        for(int i=0; i<n; i++)
        {
            if(i == key)
            {
                return array[i];
            }
        }
    }
};