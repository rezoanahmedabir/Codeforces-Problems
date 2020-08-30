#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1("My Name Is Abir");
    string s2(s1,3,4);
    ///first parameter from which string i want to copy
    /// from the index no 3(second parameter)
    ///assign 4 characters to the second string(third parameter)
    cout<<s1<<endl;
    cout<<s2<<endl;
}
