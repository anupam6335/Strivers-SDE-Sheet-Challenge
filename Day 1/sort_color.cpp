class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z,o,t; z=o=t=0;

        for(int i=0;i<nums.size();i++) { 

            if(nums[i]==0) z++;
            if(nums[i]==1) o++;
            if(nums[i]==2) t++;
        }

        for(int i=0;i<z;i++) nums[i] = 0;
        for(int i=z;i<z+o;i++) nums[i] = 1;
        for(int i=z+o;i<z+o+t;i++) nums[i] = 2;
    }
};

// code studio version
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    int z,o,t; z=o=t=0;

        for(int i=0;i<n;i++) { 

            if(arr[i]==0) z++;
            if(arr[i]==1) o++;
            if(arr[i]==2) t++;
        }

        for(int i=0;i<z;i++) arr[i] = 0;
        for(int i=z;i<z+o;i++) arr[i] = 1;
        for(int i=z+o;i<z+o+t;i++) arr[i] = 2;
}