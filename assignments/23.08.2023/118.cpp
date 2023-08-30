class Solution {
public:
int nCr(int n, int r) {
    long long res = 1;

    // calculating nCr:
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return (int)(res);
}

    vector<vector<int>> generate(int n) {
       vector<vector<int>> ans;

        //Store the entire pascal's triangle:
        for (int row = 1; row <= n; row++) {
            vector<int> tempLst; // temporary list
            for (int col = 1; col <= row; col++) {
                tempLst.push_back(nCr(row - 1, col - 1));
            }
            ans.push_back(tempLst);
        }
        return ans;

    }
};