//https://www.hackerrank.com/challenges/c-tutorial-pointer/problem

#include <stdio.h>
#include <cmath>

void update(int *a,int *b) {
    int A,B;
    A=*a+*b;
    B=abs(*a-*b); 
    *a=A;
    *b=B;
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
