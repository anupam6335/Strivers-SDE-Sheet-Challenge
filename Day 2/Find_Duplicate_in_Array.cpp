#include <bits/stdc++.h>

 

int findDuplicate(vector<int> &arr, int n){

    // Write your code here.

    int slow=arr[0];

    int fast=arr[0];

    do

    {

        slow=arr[slow];

        fast=arr[arr[fast]];

    }

    while(slow!=fast);

    fast=arr[0];

    while(fast!=slow)

    {

        fast=arr[fast];

        slow=arr[slow];

    }

    return fast;

}

// leetcode solution using map
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto it=m.begin();it!=m.end();it++){
            int val=it->first;
            if((*it).second>1)return val;
        }
        return -1;
    }
};