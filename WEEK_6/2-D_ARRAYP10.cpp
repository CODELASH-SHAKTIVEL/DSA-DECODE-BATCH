
// SCORE AFTER FLIPPING GRID/




class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int rows = grid.size();
        int colms = grid[0].size();
        for(int i = 0;i<rows;i++){
            if(grid[i][0]==0){ //check 
                for(int j=0;j<=colms;j++){ // flip the colums 
                    if(grid[i][j]==0){
                     grid[i][j]=1;
                      }   
                    else{
                    grid[i][j]=0;
                  }            
                }
            }
        }
    // flip the colums where noz>noo
    for(int j =0 ; j<colms;j++){
        int noz=0;
        int noo = 0 ;
        // check the no of noo & noz
        for(int i = 0 ; i<rows;i++){
            if(grid[i][j]==0) noz++;
            else noo++;
        }
        if(noz>noo){
        for(int i = 0 ; i<rows;i++){
             if(grid[i][j]==0){
                     grid[i][j]=1;
                      }   
                    else{
                    grid[i][j]=0;
                  }            
            }
        }
    } 
    // convert the binary into decimal 
    int sum = 0 ;
    for(int i=0;i<rows;i++){
        int x =1;
        for(int j = colms-1;j>=0;j--){
            sum+=grid[i][j]*x;
            x*=2;
        }
    }
    return sum;
    }
};