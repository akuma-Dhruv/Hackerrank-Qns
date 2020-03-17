//https://www.hackerrank.com/challenges/staircase/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    int i,j,m=0,h;
    h=n;
    while(m!=h)
    {   
        for(i=n-1;i>0;i--)
        {
            cout<<" ";

        }
        for(j=0;j<=m;j++)
        {
            cout<<"#";
        }
        cout<<endl;
    m++;n--;
    }


}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
