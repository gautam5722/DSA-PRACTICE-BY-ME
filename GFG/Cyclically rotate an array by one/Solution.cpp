/*
Question :- https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1?category%5B%5D=Arrays&amp%3Bcategory%5B%5D=Arrays&amp%3Bpage=1&amp%3Bquery=category%5B%5DArrayspage1category%5B%5DArrays

Solution:- 
*/

void rotate(int arr[], int n)
{
    int  last = arr[n-1];  
    for(int i=n-1; i >= 1; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = last;
}