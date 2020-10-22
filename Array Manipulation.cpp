https://www.hackerrank.com/challenges/crush/

///.. unoptimised

long arrayManipulation(long n,long m, vector<vector<int>> queries) 
long opp[n];
long i=0;
//initilize whole array by 0
while (i<n)
{
    opp[i]=0;   
i++;
}
long a,b,k;
i=0;
while(i<m)
{
a=queries[i][0];
b=queries[i][1];
k=queries[i][2];
i++;
for (long y=a-1;y<b;y++)
{
    opp[y]+=k;
}
}
//get max of a array
long max=0;
for (i=0;i<n;i++)
{
if(opp[i]>max)
{
    max=opp[i];
}
}
return max ;
}





// optimised 


#include <iostream>
using namespace std;
int main() {
    long int N,K,p,q,sum,i,j,max=0,x=0;

    cin>>N>>K;
    long int *a=new long int[N+1]();

    for(i=0;i<K;i++)
    {
        cin>>p>>q>>sum;
        a[p]+=sum;
        if((q+1)<=N) a[q+1]-=sum;
    }

    for(i=1;i<=N;i++)
    {
       x=x+a[i];
       if(max<x) max=x;

    }

    cout<<max;
    return 0;
}
