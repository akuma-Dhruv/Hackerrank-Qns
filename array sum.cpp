#include<iostream>
using namespace std;


int arraysum(int *pt,int s)
{
	int r,sum=0;
for (r=0;r<s;r++)
{
	sum+=pt[r];
}
return sum;

}

int main()
{
	int n,sum;
	cout<<"Enter size of array ";
	cin>>n;
	int *p=new int[n];
	cout<<"Enter elements of array ";
	for(int e=0;e<n;e++)
	{
		cin>>p[e];
	}
	sum= arraysum(p,n);
	cout<<endl<<sum;
	delete[] p;

}

