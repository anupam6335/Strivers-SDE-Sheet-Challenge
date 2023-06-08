#include <bits/stdc++.h>
vector<int> majorityElementII(vector<int> &arr) {

    vector<int> ans;
    int k=floor(arr.size()/3);
    unordered_map<int,int> map;

    for(int i=0;i<arr.size();i++) {
        if(map.count(arr[i])==0){
            map[arr[i]]=1;
        }else{
            map[arr[i]]++;
        }
    }
    for(auto& it:map) {
        if(it.second>k){
            ans.push_back(it.first);
        }
    }
    return ans;
}

// leetcode solution
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int ans=0; int n=nums.size();
        int k=3;
        map<int,int> m;
        for(int i=0;i<n;i++)
        m[nums[i]]++;
        vector<int> v;
        for(auto &x:m){
        if(x.second>(n/k)){
            v.push_back(x.first);
        }
        }
        return v;
    }
};