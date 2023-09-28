class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> seen;

        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                char current = board[i][j];
                if (current == '.')
                    continue;

                // Check row
                string rowKey = "row" + to_string(i) + current;
                if (seen.find(rowKey) != seen.end())
                    return false;
                seen.insert(rowKey);

                // Check column
                string colKey = "col" + to_string(j) + current;
                if (seen.find(colKey) != seen.end())
                    return false;
                seen.insert(colKey);

                // Check 3x3 box
                int box = (i/3)*3 + (j/3);
                string boxKey = "box" + to_string(box) + current;
                if (seen.find(boxKey) != seen.end())
                    return false;
                seen.insert(boxKey);
            }
        }
        
        return true;

    }
};

// box formula = (row/3) * 3 + (col/3)
// string we are push is Row+4+7  (row/column/box - indexNumber - element Value)