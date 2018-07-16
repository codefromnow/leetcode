class Solution {
public:
    bool isValidSudoku(vector<vector<char> >& board) {
        map<char,int> row[9],column[9],subbox[9];
        //search the validation of each row
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]<='9'&&board[i][j]>='0'){
                if(row[i][board[i][j]]==1) return false;
                row[i][board[i][j]]=1;   
                }
            }
        }
        //search the validation of each column
         for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]<='9'&&board[i][j]>='0'){
                if(column[j][board[i][j]]==1) return false;
                column[j][board[i][j]]=1;  
                }
            }
        }
      //search the validation of each subbox
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]<='9'&&board[i][j]>='0'){
                    if((i<3)&&(j<3)){
                   if(subbox[0][board[i][j]]==1) return false;
                   subbox[0][board[i][j]]=1;
               }
               else if((i<3)&&(j<6)){
                   if(subbox[1][board[i][j]]==1) return false;
                   subbox[1][board[i][j]]=1;
               }
              else if((i<3)&&(j<9)){
                   if(subbox[2][board[i][j]]==1) return false;
                   subbox[2][board[i][j]]=1;
               }
             else if((i<6)&&(j<3)){
                   if(subbox[3][board[i][j]]==1) return false;
                   subbox[3][board[i][j]]=1;
               }
                 else if((i<6)&&(j<6)){
                   if(subbox[4][board[i][j]]==1) return false;
                   subbox[4][board[i][j]]=1;
               }
                 else if((i<6)&&(j<9)){
                   if(subbox[5][board[i][j]]==1) return false;
                   subbox[5][board[i][j]]=1;
               }
                 else if((i<9)&&(j<3)){
                   if(subbox[6][board[i][j]]==1) return false;
                   subbox[6][board[i][j]]=1;
               }
                 else if((i<9)&&(j<6)){
                   if(subbox[7][board[i][j]]==1) return false;
                   subbox[7][board[i][j]]=1;
               }
                   else {
                   if(subbox[8][board[i][j]]==1) return false;
                   subbox[8][board[i][j]]=1;
               }
                               
    
                       }
                       } 
    }
      return true;                 
}
   
                       };
				
