#include <bits/stdc++.h> 
int path(int m, int n, int row, int col, vector<vector<int>> &dp){
        if(row == m-1 && col == n-1)  return 1;
        if(row >=m || col >= n) return 0;
        if(dp[row][col] != -1) return dp[row][col];
        int right =  path(m,n,row,col+1,dp);
        int down = path(m,n,row+1,col,dp);
        return dp[row][col] = right + down;
    }
int uniquePaths(int m, int n) {
	vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
	return path(m,n,0,0,dp);
}


// leetcode solution
class Solution {

int solve(int i,int j, vector<vector<int>>&dp) {
    if(i==0 and j==0)
        return 1;
    if(i<0 or j<0)
        return 0;

    if(dp[i][j]!=-1)
        return dp[i][j];
    return dp[i][j]=solve(i-1,j,dp)+solve(i,j-1,dp);
        
}

public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return solve(m-1,n-1,dp);
    }
};