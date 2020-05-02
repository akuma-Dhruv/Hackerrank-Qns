//https://www.hackerrank.com/challenges/diagonal-difference/problem

int diagonalDifference(vector<vector<int>> arr,int n)
 {
int Final=0;
int pd=0,sd=0;
int i=0;
for (i=0;i<=n;i++)
{pd+=arr[i][i];

}
int j=n;
for(i=0;i<=n;i++,j--)
{
    sd+=arr[i][j];

}

Final=abs(sd+pd);
return Final;
}
