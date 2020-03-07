#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    if (a>b) 
    { if (a>c&&a>d) 
        {
        return a;
        }
        else if(c>d)
        {
            return c;
        }
        else 
         return d;
    
    }
    else if(c>a && c>b) 
    {
        if(c>d)
        {
            return c;
        }
        else 
        return d;
    
    }
    return b;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
