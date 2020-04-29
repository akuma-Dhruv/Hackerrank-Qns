//https://www.hackerrank.com/challenges/divisible-sum-pairs/problem
int divisibleSumPairs(int n, int k, vector<int> array) 
{cout<<n;
    int i=0,j=1,count=0;
    
    
 for(i = 0; i < n ; i++)
{
for(j = 0; j < n ; j++)
{
if(i < j)
{
if((array[i] + array[j]) % k == 0)
count++;
}
}
}
cout<<count;
return count;
}
