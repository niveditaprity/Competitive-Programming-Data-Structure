class Solution {
public:
    string generateTheString(int n) {
      string odd(n,'a');
        string even(n-1,'a');
            even+='b';
        if(n%2==0)
        { 
            return even;
        }
        else
        {
            return odd;
        }
        
        
    }
};
