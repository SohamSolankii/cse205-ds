class Solution {
public:
int nCr(int n, int r) {
    long long res = 1;

    // calculating nCr:
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

    vector<int> getRow(int rowIndex) {
        ++rowIndex;
        vector<int> v;
        for (int c = 1; c <= rowIndex; c++) {
            v.push_back(nCr(rowIndex - 1, c - 1));
        }

        return v;
    }
};