//https://www.hackerrank.com/challenges/sock-merchant


int sockMerchant(int n, vector<int> ar) {
      sort(ar.begin(), ar.end());
    int count =0;
    for(int i=0;i<n;i++)
    {
    if(ar[i]==ar[i+1])
    {count++;
    i++;
    }
    }
return count;
}
