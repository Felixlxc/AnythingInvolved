/*Basic of arrays and vectors*/
/*From leetcode explore//learn */

// Q1: Max Consecutive Ones
#include <iostream>
#include <vector>
#include <algorithm>
class MaxConsecutiveOnes {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_length = 0;
        int temp_length = 0;
        int size = nums.size();
        if(size==0) return 0;
        for (int i=0; i<size; i++)
        {
            if (nums[i]==1)
            {
                temp_length ++;
                if (temp_length > max_length) max_length = temp_length;
            }
            else
            {
                temp_length = 0;
            }
            
        }
    return max_length;
    }
    
};


class NumWithEvenNumDigit {
public:
    int findNumbers(vector<int>& nums) {
        int result = 0;
        int size = nums.size();
        if (size==0) return 0;
        for (int i=0; i<size; i++)
        {
            int temp = nums[i];
            int temp_digit = NumofDigit(temp);
            if (temp_digit%2==0) result++;
        }
        return result;

    }

private:
        int NumofDigit(int n)
    {
        int nd=0;
        while (n!=0)
        {
          n = n/10;
          nd++;

        }
        return nd;
    }
};


class SqureOfSortedArray {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (int i=0; i<nums.size();i++)
        {
            nums[i] = nums[i]*nums[i];
        }

        sort(nums.begin(), nums.end());
        return nums;
    }//very slow
};

class SqureOfSortedArray {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int l = 0;
        int r = nums.size() - 1;
        for (int i = nums.size() - 1; i>=0; i--)
        {
            if (fabs(nums[l]) < fabs(nums[r]))
            {
                ans[i] = nums[r]*nums[r];
                r--;
            }
            else
            {
                ans[i] = nums[l] * nums[l];
                l ++;
            }
        }
        return ans;
    }
    //very slow
};