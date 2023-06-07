bool searchMatrix(vector<vector<int>>& mat, int target) {

    int m = mat.size(), n = mat[0].size();
    int i=m-1, j=0;

    while(i>=0 && j<n)
    {
        int val = mat[i][j];

        if(val == target)
            return true;

        (val > target) ? (i--) : (j++);
    }

    return false;
}

// leetcode solution
class Solution {
     bool help(vector<vector<int>>& matrix, int rows, int columns, int target) {
        int row = 0, col = columns;
         
         while(row < rows and col >=0){
             if(matrix[row][col] == target) return true;
             
             matrix[row][col] < target ? row++ : col--;
         }
         
         return false;
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        return help(matrix,matrix.size(),matrix[0].size() - 1, target);
    }
};