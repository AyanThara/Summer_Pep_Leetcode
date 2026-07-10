class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();//calculate the size of matrix 
        for(int i=0;i<n;i++){//start a loop from 0,0 till n i is row wise
            for(int j=i;j<n;j++){//start a loop from i till n j is row wise 
            swap(matrix[i][j],matrix[j][i]);//swap i,j with j,1
            }
        }for(int i=0;i<n;i++){//start a loop till n 
            reverse(matrix[i].begin(),matrix[i].end());//reverse the cols
        }
    }
};