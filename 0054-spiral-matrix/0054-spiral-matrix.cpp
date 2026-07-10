class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int rows = matrix.size();
        int cols = matrix[0].size();
        //intilizing the index
        int startRow = 0;//starting row as 0 index 
        int endRow = rows - 1;//last row as row-1 index
        int startCol = 0;
        int endCol = cols - 1;
        while(startRow <= endRow && startCol <= endCol){
            // left → right
            for(int col = startCol; col <= endCol; col++){
                ans.push_back(matrix[startRow][col]);
            }
            startRow++;
            // top → bottom
            for(int row = startRow; row <= endRow; row++){
                ans.push_back(matrix[row][endCol]);
            }
            endCol--;
            // right → left
            if(startRow <= endRow){
                for(int col = endCol; col >= startCol; col--){
                    ans.push_back(matrix[endRow][col]);
                }
                endRow--;
            }
            // bottom → top
            if(startCol <= endCol){
                for(int row = endRow; row >= startRow; row--){
                    ans.push_back(matrix[row][startCol]);
                }
                startCol++;
            }
        }return ans;
    }
};