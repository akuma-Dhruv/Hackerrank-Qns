//https://www.hackerrank.com/challenges/drawing-book/problem

int pageCount(int n, int p) {
int diff=0;
    int pg=0;
    diff= n-p;
    if(diff>p)
    {
        pg=p/2;
        return pg;

    }
    else if (n%2==0 &&diff==1&&diff<p)
    {
        pg=1;
        return pg;

    }
    else 
    {pg= diff/2;
    return pg;
}
