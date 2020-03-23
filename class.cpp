//https://www.hackerrank.com/challenges/c-tutorial-class/problem


#include <bits/stdc++.h>
using namespace std;


class Student
{
int age,std;
string  Fname,Lname;

public:

void set_age(int aged)
{
age=aged;

}
void set_standard(int tem)
{
std=tem;

}
void set_first_name(string tst)
{ Fname = tst;
//strcpy(Fname,tst);

}
void set_last_name(string tstr)
{Lname = tstr;
//strcpy(Lname,tstr);
}

string get_first_name()
{
return Fname;

}
string get_last_name()
{
return Lname;
}
int get_age()
{
return age;
}
int get_standard()
{
return std;
}
void to_string()
{
    cout<<age<<","<<Fname<<","<<Lname<<","<<std;
}

};


int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
     st.to_string();
    
    return 0;
}
