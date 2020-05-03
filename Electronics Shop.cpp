//https://www.hackerrank.com/challenges/electronics-shop/problem

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int kSize = keyboards.size();
    int uSize= drives.size();
    int j=0,max=0,sum=0,count=0;
    
    
    for (int i=0;i<kSize;i++)
    {
        for(j=0;j<uSize;j++)
        {
            sum=keyboards[i]+drives[j];
            if(sum>max&&sum<=b)
            {max=sum;
            count++;}
        }
    }
    if(count==0)
    return -1;
    else
    return max;
    

}
