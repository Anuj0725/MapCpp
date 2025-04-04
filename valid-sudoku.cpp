class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) {
          unordered_set<char> Row[9], Col[9], Set[9];
    
            for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 9; j++) {
                    char num = board[i][j];
                    if (num == '.') continue; 
                    
                    int boxIndex = (i / 3) * 3 + (j / 3); 
                
                    if (Row[i].count(num) || Col[j].count(num) || Set[boxIndex].count(num)) {
                        return false;
                    }
                    
                    Row[i].insert(num);
                    Col[j].insert(num);
                    Set[boxIndex].insert(num);
                }
            }
            return true;  
        }
    };
