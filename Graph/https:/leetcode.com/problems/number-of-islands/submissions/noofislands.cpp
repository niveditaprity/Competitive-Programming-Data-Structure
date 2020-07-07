class Solution {
public:
    void occupy(vector<vector<char>>& grid,int x,int y,int r,int c)
    {
        if(x<0||x>=r||y<0||y>=c||grid[x][y]!='1')
        {
            return;
        }
        else
        {
            grid[x][y]='2';
        }
        occupy(grid,x,y+1,r,c);
        occupy(grid,x-1,y,r,c);
        occupy(grid,x+1,y,r,c);
        occupy(grid,x,y-1,r,c);
    }
    int numIslands(vector<vector<char>>& grid) {
      int count=0;
        int rows=grid.size();
        if(rows==0)
        {
            return 0;
        }
        int col=grid[0].size();
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]=='1')
                {
                    occupy(grid,i,j,rows,col);
                    count++;
                }

            }
        }
        return count;
    }
};
