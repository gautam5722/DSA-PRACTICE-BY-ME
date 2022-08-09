/*
Question :- https://practice.geeksforgeeks.org/problems/perfect-number3759/1

Solution :- 
*/

class Solution {
  public:
  int Factorial(int n)
  {
      int factorial = 1;
      for(int i=1; i<=n; i++)
      {
          factorial *= i;
      }
      return factorial;
  }
  
    int isPerfect(int N) {
        int temp = N;
        int sum = 0;
        while(N != 0)
        {
            int lastNo = N % 10;
            sum += Factorial(lastNo);
            N/=10;
        }
            if(temp == sum)
            {
                return 1;
            }
            return 0;
    }
};
