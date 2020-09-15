#include<stdio.h>
long long int sum_sequence(long long int n)
{
  if(n==1)
   {          /* if n=1 then it should return 1 as from series s=1+(2*3)+.... */
     return 1;
   }
  else
  {
    long long int mul=1+(n*(n-1))/2;
    long long int sum=1;
    long long int i;
    for(i=1;i<=n;i++)
    {
      sum=sum*mul;
      mul++;
    }
    return sum+sum_sequence(n-1);
   }
}
int main()
{
  long long int t;
  scanf("%lld",&t);
  while(t--)
   {
    long long int n;
    scanf("%lld",&n);
    printf("%lld\n",sum_sequence(n));
   }
return 0;
}
