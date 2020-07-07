void makr_land(vector<int>A[],int x,int y,int r,int c)
{
    if(x<0||x>=r||y<0||y>=c||A[x][y]!=1)
    {
        return;
    }
    else
    {
    A[x][y]=2;
    }
    makr_land(A,x+1,y,r,c);
  makr_land(A,x-1,y,r,c);
  makr_land(A,x,y+1,r,c);
  makr_land(A,x,y-1,r,c);
  makr_land(A,x+1,y+1,r,c);
  makr_land(A,x-1,y-1,r,c);
  makr_land(A,x+1,y-1,r,c);
  makr_land(A,x-1,y+1,r,c);
  makr_land(A,x-1,y-1,r,c);
    
    
}
int findIslands(vector<int> A[], int N, int M) {
int count=0;
int rows=N;
if(rows==0)
{
    return 0;
}
int col=M;
for(int i=0;i<rows;i++)
{
    for(int j=0;j<col;j++)
    {
        if(A[i][j]==1)
        {
            makr_land(A,i,j,rows,col);
            count+=1;
        }
    }
}
return count;
    // Your code here
}
