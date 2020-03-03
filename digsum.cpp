#include <bits/stdc++.h>

using namespace std;


int diagonalDifference(int n, int **p)
{ int i=0,j,rd=0,ld=0,diff=8;
j=n-1;
for(i=0;i<n;i++)
{
    rd+=p[i][j];
    j--;

}
j=0;
for(i=n;i>=0;i--)
{
    ld+=p[i][j];
    j++;
}

diff=ld-rd;

diff=abs(diff);
return diff;

}

int main()
{ int m,sum=0;
    cin>>m;
    int** arr = new int*[m];// pointers

    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[i + 1];//2d array
        for (int j = 0;j <m; j++)
        {
            cin >> arr[i][j];//input

        }

    }
    sum=diagonalDifference(m,arr);
    cout<<sum;
    for(int i = 0; i < m; i++)
    delete [] arr[i];
    return 0;

}
