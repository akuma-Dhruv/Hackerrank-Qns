//https://www.hackerrank.com/challenges/bon-appetit/problem

void bonAppetit(vector<int> bill, int k, int b) {
int size = bill.size();
int n=0;
long total =0;
while (n<size)
{
    total+=bill[n];
    n++;

}
total-=bill[k];
total/=2;
if(total== b)
{
    cout<<"Bon Appetit";
}
else 
{
    cout<< abs(b-total);
}



} 
