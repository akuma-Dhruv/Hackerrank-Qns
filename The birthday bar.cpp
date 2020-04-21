//https://www.hackerrank.com/challenges/the-birthday-bar/problem

int birthday(vector<int> s, int d, int m) {
int n= s.size();
int i=0,cnt=0,sum=0;
 for (int i=0; i<m; i++)
        sum += s[i];
    if (sum == d)
        cnt++;
    for (int i=m; i<n; i++)
    {
        sum += s[i];
        sum -= s[i-m];
        if (sum == d)
            cnt++;
    }

return cnt;
}
