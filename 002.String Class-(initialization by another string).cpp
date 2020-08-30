#include<iostream>
#include<string>
using namespace std;
int main()
{
    /**initialization with another string variable
    remember that you only can initialize when you
    declare a string variable
    **/
    string s1("First Name"),s2(s1);
    /// s2(s1); not allowed
    cout<<s1<<endl;
    cout<<s2<<endl;
    ///but
    /**you can do it by  assigning operator*/

    s1="Last name";
    s2=s1;
    cout<<s1<<endl;
    cout<<s2<<endl;
}
