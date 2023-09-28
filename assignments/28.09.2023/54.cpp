class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<int> ans;

        // Initialize the pointers reqd for traversal.
        int left = 0, top = 0, right = m - 1, bottom = n-1;

        while(top <= bottom && left <= right){

            for(int i = left; i <= right ;i++)
                ans.push_back(matrix[top][i]);
            
            top++;

            for (int i = top; i <= bottom; i++)
                ans.push_back(matrix[i][right]);

            right--;

            // middle thi aagd code ne nthi jva devo mate
            if (top <= bottom) {
                for(int i = right;i >= left; i--)
                    ans.push_back(matrix[bottom][i]);

                bottom--;
            }

            if (left <= right) {
                for(int i = bottom;i >= top; i--)
                    ans.push_back(matrix[i][left]);

                left++;
            }

        }

        return ans;

    }
};