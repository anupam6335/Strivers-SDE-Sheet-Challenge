class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n= size(matrix), m = size(matrix[0]);
        bool row=false, col=false;
        
        // if first row contains zero mark it zero
        for(int i=0; i<n; i++) {
            if(matrix[i][0] == 0) {
                col = true; 
                break;
            }
        }
        
        
        
        // if first col contains zero mark it zero
        for(int i=0; i<m; i++) {
            if(matrix[0][i] == 0) {
                row = true; 
                break;
            }
        }
        
        
        // now check entire matrix except first row and col because we handle it later
        // when found zero mark it first col and row  zero that index where found zero 
        for(int i=1; i<n; i++) {
            for(int j=1; j<m; j++) {
                if(matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        
        
        
         // now check first row  except [0,0] when found zero mark it entire row as zero
        for(int j=1; j<m; j++) {
            if(matrix[0][j] == 0) {
                for(int i=0; i<n; i++) {
                    matrix[i][j] = 0;
                }
            }
        }
        
        
        
        
        // now check first col  except [0,0] when found zero mark it entire col as zero
        for(int i=1; i<n; i++) {
            if(matrix[i][0] == 0) {
                for(int j=0; j<m; j++) {
                    matrix[i][j] = 0;
                }
            }
        }
        
        
        // now if 0,0 ele if zero or 0th row contains any zero make if 0th row as zero 
        // and same with col
        
        if(row) {
            for(int j=0; j<m; j++) {
                matrix[0][j] = 0;
            }
        }
        if(col) {
            for(int i=0; i<n; i++) {
                matrix[i][0] = 0;
            }
        }
        
    }
};