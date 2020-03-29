//https://www.hackerrank.com/challenges/time-conversion/problem

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    string result;
     string neww;
     int pm=0;
    int h1 = (int)s[1] - '0'; 
    int h2 = (int)s[0] - '0'; 
    int hh = (h2 * 10 + h1 % 10); 

  if (s[8]=='A')  
  {
      if (hh==12)
      {
         result= "00"+s.substr(2,6);
      }
      else
      result=s.substr(0,8);
  }
  else if (s[8]=='P')
  {
if (hh==12)
      {
         result= s.substr(0,8);
      }
      else
       {pm=hh+12;
      neww= to_string(pm);
        result= neww+s.substr(2,6);
      }
      
  }
  return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
