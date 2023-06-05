class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal(numRows);
        
        
        for(int i=0; i<numRows; i++) {
            pascal[i].resize(i+1);
            
            pascal[i][0] = pascal[i][i] = 1;
            
            
            for(int j=1; j<i; j++){
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
            }
        }
        
        return pascal;
    }
};

//  code studio solution

#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>> pascal(n);
        
        
        for(int i=0; i<n; i++) {
            pascal[i].resize(i+1);
            
            pascal[i][0] = pascal[i][i] = 1;
            
            
            for(int j=1; j<i; j++){
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
            }
        }
        
        return pascal;
}
