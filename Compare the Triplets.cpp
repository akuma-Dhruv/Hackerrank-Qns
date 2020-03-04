#include <bits/stdc++.h>

using namespace std;



// Complete the compareTriplets function below.
int compareTriplets(int al[],int bo[] ,int u[])
{
    int a=0,b=0;

    for(int r=0;r<=2;r++)
    {
        if (al[r]>bo[r])
          { a++;

          }
        if (al[r]<bo[r])
             {b++;

             }



    }
u[0]=a;

u[1] =b;

return 0;
}

int main()
{
    int y, a[3],b[3],c[2]; int *t;
 for(y=0;y<3;y++)
 {
     cin>>a[y];
 }
 for(y=0;y<3;y++)
 {
     cin>>b[y];
 }
compareTriplets(a,b,c);
cout<<c[0]<<" "<<c[1];

}
