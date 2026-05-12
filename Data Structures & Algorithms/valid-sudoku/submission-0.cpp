class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9] = {0}, col[9] = {0}, box[9] = {0};
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                char ch = board[i][j];
                if(ch == '.')
                    continue;
                int digit = ch - '0';
                int bit = 1 << digit;

                int b = (i/3)*3+(j/3);

                if(row[i] & bit)
                    return false;
                if(col[j] & bit)
                    return false;
                if(box[b] & bit)
                    return false;

                row[i] |= bit;
                col[j] |= bit;
                box[b] |= bit;
            }
        }
        return true;
    }
};