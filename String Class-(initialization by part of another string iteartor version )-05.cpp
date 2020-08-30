#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1("Chittagong University of Engineering and Technology");
    string s2(s1.begin(),s1.begin()+10);
    ///first parameter is the beginning index of s1
    ///second parameter is which place i want to stop
    ///i want to stop 10 index after the beginning point
    cout<<s1<<endl;
    cout<<s2<<endl;
///lets familiar with clear function
///that clears our entire string
s2.clear();
cout<<"empty : "<<s2<<endl;
///we can see that nothing is printed after "empty:"
///so we can say that all  the indexes are filled with null character
}
