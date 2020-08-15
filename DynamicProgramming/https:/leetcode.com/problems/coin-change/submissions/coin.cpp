class Solution {
public:
    int coinChange(vector<int>& coins, int value) {
      int n=coins.size();
    int t[n+1][value+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<value+1;j++)
        {
            if(j==0)
            {
              t[i][j]=0;  
            }
            if(i==0)
            {
                t[i][j]=INT_MAX-1;
            }
        }
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<value+1;j++)
        {
            if(coins[i-1]<=j)
            {
                t[i][j]=min(t[i-1][j],t[i][j-coins[i-1]]+1);
            }
            else
            {
                t[i][j]=t[i-1][j];
            }
        }
    }
  
  if(t[n][value]==INT_MAX-1)
  {
      return -1;
  }
  else
  {
      return t[n][value];
  }
  // your code here 
    }
};
