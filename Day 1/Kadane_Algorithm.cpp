class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        int max_sum = INT_MIN;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += nums[i];
            max_sum = max(sum, max_sum);
            if(sum < 0) sum = 0;

    }
    return max_sum;  
    }
};

// code studio solution
#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long currSum=0;

    long long maxSum = INT_MIN; 

    for(int i=0; i<n; i++){

        currSum+=arr[i];

        if(currSum < 0){

            currSum=0;

        }

        maxSum=max(maxSum, currSum);

    }

    return maxSum;
}