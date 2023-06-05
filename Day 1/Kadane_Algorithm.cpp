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