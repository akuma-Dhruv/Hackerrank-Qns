// https://www.hackerrank.com/challenges/c-tutorial-strings/problem


#include <bits/stdc++.h>
using namespace std;

int main()


{
    string a,b;
    int y,z,n=1;

    cin>>a>>b;
y=a.size();
z=b.size();
    cout<<y<<" "<<z<<endl;
    cout<<a+b<<endl;
   

    cout<<b[0];
    while(a[n]!='\0')
    {
        cout<<a[n];
        n++;
    }n=1;
        cout<<" "<<a[0];
    while(b[n]!='\0')
    {
        cout<<b[n];
        n++;
    }
    /*
    //////////////////////////////////////////or later realised it can be sloved like this
    char temp;
    temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    cout<<"\n"<<a<<" "<<b;
    */
    return 0;
}
