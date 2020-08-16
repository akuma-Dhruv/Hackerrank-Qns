//https://www.hackerrank.com/challenges/sparse-arrays/problem

vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector <int> g;
    int p=strings.size();
    int y=queries.size();
    int a=0;
    for (int i=0;i<y;i++)
    { a=0;
        for(int j=0;j<p;j++)
        {
            if(queries.at(i)==strings.at(j))
            {
                a++;
            }
        }
            g.push_back(a);
    }

return g;
}
