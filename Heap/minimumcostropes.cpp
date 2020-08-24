long long minCost(long long arr[], long long n) {
long long count =0;
priority_queue<long long,vector<long long>,greater<long long>>minheap(arr,arr+n);
while(minheap.size()!=1)
{
    long long a=minheap.top();
    minheap.pop();
    long long b=minheap.top();
    minheap.pop();
    count+=(a+b);
    minheap.push(a+b);
}
return count;
}
