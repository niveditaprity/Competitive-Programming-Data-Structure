class Solution{   
public:
    int maximumSumSubarray(int K, vector<int> &Arr , int N){
        int sum=0,maxm=0;
        int i=0,j=0;
        while(j<N)
        {
            sum+=Arr[j];
            if(j-i+1<K)
            {
                j++;
            }
            else if(j-i+1==K)
            {
                maxm=max(maxm,sum);
                
                sum-=Arr[i];
                i++;
                j++;
            }
        }
      return maxm;  // code here 
    }
};
