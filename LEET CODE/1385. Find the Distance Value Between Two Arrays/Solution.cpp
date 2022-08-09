/*

Question :-   https://leetcode.com/problems/find-the-distance-value-between-two-arrays/

Solution :- 

*/

class Solution {
public:
    int findTheDistanceValue(vector<int>& array1, vector<int>& array2, int d) {
        int count = 0;
        for(int i=0; i < array1.size(); i++)
        {
            int first = array1[i];
            bool flag = true;
            for(int j=0; j < array2.size(); j++)
            {
                int second = array2[j];
                if(abs(first - second) <= d)
                {
                    flag = false;
                    break;
                }
            }
            if(flag){
                count++;
            }
        }
        return count;
    }
};