#include <bits/stdc++.h>

 

int findMajorityElement(int arr[], int n) {

    if (n == 1) return arr[0];

    

    int count = 1;

    // sort the array

    sort(arr, arr + n);

    for (int i = 1; i <= n; i++){

        if (arr[i - 1] == arr[i]){

            count++;

        }

        else{

            if (count > n / 2){

                return arr[i - 1];

            }

            count = 1;

        }

    }

    return -1;

}

// leetcode solution

class Solution {
     int help(vector<int>& nums) {
         int n = nums.size();
        unordered_map<int,int> m;
        
        for(int i = 0 ; i <n ; i++) m[nums[i]]++;
        
        for(auto it : m) if(it.second > n/2) return it.first;
        
        return -1;
    }
public:
    int majorityElement(vector<int>& nums) {
        return help(nums);
    }
};