//https://www.hackerrank.com/challenges/arrays-ds/problem

#include <bits/stdc++.h>

using namespace std;
int main()
{
int h;
cin>>h;
int a[h];
for (int i=0;i<h;i++)
cin>>a[i];

for(int i=h-1;i>=0;i--)
cout<<a[i]<<" ";

}
