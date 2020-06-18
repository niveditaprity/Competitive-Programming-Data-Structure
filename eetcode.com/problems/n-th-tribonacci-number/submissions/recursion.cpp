class Solution {
public:
    int t[100];
    int tribonacci(int n) {
        
        if(n==0||n==1)
        {
            return n;
        }
        if(n==2)
        {
            return 1;
        }
        if(t[n]!=0)
        {
            return t[n];
        }
        else
        {
            t[n]=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
            return t[n];
        }
    
        
    }
};
