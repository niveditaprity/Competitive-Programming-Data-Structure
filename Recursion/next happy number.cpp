class Solution{
public:
bool ishappy(int n)
{
    
    if(n==1 or n==7)
    {
        return true;
    }
    else if(n<10)
    {
        return false;
    }
    else
    {
        int next=0;
        while(n)
        {
          next+=(n%10)*(n%10);
          n=n/10;
        }
        return ishappy(next);
    }
}
