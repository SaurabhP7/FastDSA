class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        //check for conditions        
        if(grid.empty() ||  grid[0].empty()){
            return 0 ;
        }
        
        
      
        int H=grid.size() ;
        int W=grid[0].size() ;
        
        vector<vector<bool>> visited(H,vector<bool>(W)) ;
        int answer=0 ;
        
        vector<pair<int,int>> directions={{1,0},{0,1},{-1,0},{0,-1}} ;
         
        //check if it is inside the matrix
        auto inside=[&](int row,int col){
            return (0<=row && row<H && 0<=col && col<W) ;
         };
        
        for(int row=0;row<H;row++){
            for(int col=0;col<W;col++){
                
                if(!visited[row][col] && grid[row][col]=='1')
                {
                    answer++ ;
                  
                    queue<pair<int,int>> q ;
                    q.push(make_pair(row,col)) ;
                    visited[row][col]=true ;
                    
                    while(!q.empty()){
                        
                        pair<int,int> p=q.front() ;
                        q.pop() ;
                        
                        for(pair<int,int> dir:directions){
                            int new_row=p.first+dir.first ;
                            int new_col=p.second+dir.second ;
                            
                            if(inside(newrow,newcol) && !visited[new_row][new_col] && grid[new_row][new_col]=='1'){
                                
                                q.push(make_pair(new_row,new_col)) ;
                                visited[new_row][new_col]=true ;
                                
                            }
                        }
                        
                    }                
                    
                    
                }
                
            }
          }
        
        return answer ;
    }
};
