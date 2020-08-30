#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    /** .begin()
    this function is used to return  an iterator pointing
    to the first element of the vector.
    there is no parameter in it;
    it returns bidirectional iterator that pointing
    to the first element of the vector array;

   .rbegin() is the opposite of .begin()
    .rbegin() returns reverse iterator that pointing
    to the last element;

    .cbegin() returns a constant iterator that pointing
    to the first element

    .crbegin() returns a constant reverse iterator that
    pointing to the last element
    **/
    /** .end()
    this function is used to return an iterator pointing
    to the last element of the vector
    there is no parameter in it;
    it also returns a bidirectional iterator that pointing
    to the last element of the vector array;

    .rend() is the opposite of .end()
     .rend() returns reverse iterator that pointing
     to the first element

    .cend() returns a constant iterator that pointing to the
    last element

    .crend() returns a constant reverse iterator that
    pointing to the first element

    **/
    /**Example of each one**/
    ///declaring vector
    vector<int>v={1,2,3,4,5,6};
    vector<int>b={8,9,10,11,12};
    vector<int>c={14,15,16,17,18};
    vector<int>d={19,20,21,22,23};
    ///declaring vector iterator
    ///that can access the vector elements
    vector<int>::iterator i;
    cout<<"using .begin() and .end() "<<endl;
    for(i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"using .rbegin() and .rend() "<<endl;
    vector<int>::reverse_iterator k;
    for(k=b.rbegin();k!=b.rend();k++)
    {
        cout<<*k<<" ";
    }
    cout<<endl;
    cout<<"using .cbegin() and .cend()"<<endl;
    vector<int>::const_iterator l;
    for( l=c.cbegin();l!=c.cend();l++)
    {
        cout<<*l<<" ";
    }
    cout<<endl;
    cout<<"using .crbegin() and .crend()"<<endl;
    vector<int>::const_reverse_iterator m;
    for(m=d.crbegin();m!=d.crend();m++)
    {
        cout<<*m<<" ";
    }
    cout<<endl;
    /// if you don't wanna declare those types of iterator
  ///  every time  you should have use
  /// auto k
  ///auto m
  ///auto l
  ///auto  --- automatically defines  what the type of variable is it;

}
