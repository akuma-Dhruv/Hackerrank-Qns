//https://www.hackerrank.com/challenges/2d-array/problem
int hourglassSum(vector<vector<int>> arr) {

 int a=0;

vector<int>ans;
for(int i=0;i<4;i++)
{
    for(int j=0;j<4;j++)
    {
        for(int k=j,count =0;count<3;count++,k++)
        {
            a+=arr[i][k];
            a+=arr[i+2][k];
        }
        a+=arr[i+1][j+1];
        ans.push_back(a);
        a=0;
    }
}

a= *max_element(ans.begin(), ans.end());
return a;
}
