//https://www.hackerrank.com/challenges/arrays-introduction/problem

#include <iostream>

using namespace std;


int main() {
    int ar[1000],n;
    cin>>n;
    for (int y=0;y<n;y++)
    {
        cin>>ar[y];


    }
    for (int y=n-1;y>=0;y--)
    {
        cout<<ar[y]<<" ";


    }   
    return 0;

}
