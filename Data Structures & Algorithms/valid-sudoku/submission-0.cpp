class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        map<char, int> box1;
        map<char, int> box2;
        map<char, int> box3;    

        vector<set<char>> columns(9);
        for(int i = 0; i < board.size(); i++){
            if(i%3 == 0){
                box1.clear();
                box2.clear();
                box3.clear();                                
            }
            map<char, int> row;
            for(int j = 0; j < board.size(); j++){
                char cell = board[i][j];
                if(row.contains(cell) && cell!= '.'){
                    return false;
                } else{
                    row[cell]++;
                }

                if(j < 3){
                    if (box1.contains(cell) && cell!= '.'){
                        return false;
                    } else{
                        box1[cell]++;
                    }
                } else if(j < 6){
                    if (cell!= '.' && box2.contains(cell)){
                        return false;
                    } else{
                        box2[cell]++;
                    }
                } else if(j < 9){
                    if (cell!= '.' && box3.contains(cell)){
                        return false;
                    } else{
                        box3[cell]++;
                    }
                }
            
                   if (columns[j].contains(cell) && cell != '.') {
                        return false;
                    } else{
                        columns[j].insert(cell); 
                    }

            }

        }

        return true;
    }
};
