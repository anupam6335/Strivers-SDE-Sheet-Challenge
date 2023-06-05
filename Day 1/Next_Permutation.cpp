// using STL libiray
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    next_permutation(nums.begin(),nums.end());
    }
};

//  without stl libiray

class Solution {
public:
    void nextPermutation(vector<int> &nums)
    {
        int n = size(nums);
        if (n == 1)
            return;

        int i = 1;
        int lastInc = -1;
        while (i < n)
        { // Find the peak of last ASC order
            if (nums[i] > nums[i - 1])
                lastInc = i;
            i += 1;
        }

        if (lastInc == -1)
        { // Check if array is DSC
            for (i = 0; i < n / 2; ++i)
                swap(nums[i], nums[n - i - 1]);
            return;
        }
        // Find element in the range (nums[lastInc-1] to nums[lastInc]) to the right
        int mn = nums[lastInc];
        int index = lastInc;
        for (i = lastInc; i < n; ++i)
        {
            if (nums[i] > nums[lastInc - 1] and nums[i] < nums[index])
            {
                index = i;
            }
        }
        swap(nums[lastInc - 1], nums[index]);
        sort(nums.begin() + lastInc, nums.end());
    }
};

//  code studio solution

#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.

    int breakPoint = -1; // break point
    for (int i = n - 2; i >= 0; i--) {
        if (permutation[i] < permutation[i + 1]) {
            breakPoint = i;
            break;
        }
    }

    if (breakPoint == -1) {
        reverse(permutation.begin(), permutation.end());
        return permutation;
    }

    for (int i = n - 1; i > breakPoint; i--) {
        if (permutation[i] > permutation[breakPoint]) {
            swap(permutation[i], permutation[breakPoint]);
            break;
        }
    }
    reverse(permutation.begin() + breakPoint + 1, permutation.end());

    return permutation;
}