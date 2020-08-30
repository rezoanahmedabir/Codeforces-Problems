#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
void print(vector<int>l)
{
    vector<int>::iterator i;
    for(i=l.begin();i!=l.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
}

int main()
{
    /** Functions for Capacity**/
    vector<int>v={1,2,5,6,7,7};
/** .size() - returns the number of elements in the vector
        there is no uses parameter in it;

.max_size() -- returns the maximum number of elements that
 the vector can hold.there is no uses parameter in it;

 .capacity()--returns the size of the storage space currently allocated
to the vector expressed as number of elements.
    there is no uses parameter in it;

 .resize()-- it takes integer value as  a parameter
 resize the container so that it contains "n" elements given by the user

 .empty() --- returns true when container is empty else returns false

 .shrink_to_fit()-- Reduces the capacity of the container to fit its size and destroys
  all elements beyond the capacity.
  **/
  cout<<"size "<<v.size()<<endl;
  cout<<"max_size "<<v.max_size()<<endl;
  cout<<"Capacity "<<v.capacity()<<endl;
  ///resizing the vector size to 3
  v.resize(3);
  print(v);
  v.shrink_to_fit();
  v.resize(6);
print(v);
  cout<<endl;
  ///after resizing the size of the vector
  cout<<"After resize the Size : "<<v.size()<<endl;
  ///checking the vector is empty or not
  if(v.empty()==false)
  {
      cout<<"IT's Fine to be fulfill"<<endl;
  }
  else
  {
      cout<<"IT's also FIne"<<endl;
  }
  vector<int>g(150);///this vector initially have 150 indexes
  ///current capacity of the  vector
  cout<<"Current Capacity :"<<g.capacity()<<endl;
  g.resize(100);
  ///after resizing the capacity of the vector
  cout<<"After Resize : "<<g.capacity()<<endl;
  ///using shrink to fit
g.shrink_to_fit();
cout<<"After Shrink :  "<<g.capacity()<<endl;
/**
so after this example we understand that
the capacity will not change if we use resize alone
but if we resize then we shrink the container then it will
change the capacity of the container
**/

/**Functions For element access**/
vector<int>k={1,2,3,6,7,4};
///we want to print the element which is in the 4th index(count from 0)
///we can use [ ] operator
cout<<"5th element of this vector is  "<<k[4]<<endl;
///we can use .at() function
cout<<"4th element of this vector is "<<k.at(3)<<endl;
///for printing the first element
cout<<"1st element of this vector is "<<k.front()<<endl;
///for printing the last element
cout<<"last element of this vector is "<<k.back()<<endl;
/// .data() it returns a pointer that pointing to
/// the first element of the container
cout<<"Uses of .data()"<<endl;
int *ptr;
ptr=k.data();
for(int gg=0;gg<k.size();gg++)
{
    cout<<*(ptr++)<<" ";
}
cout<<endl;
/** Modifiers of vector**/
/**
  .assign() --- it assign new value to the vector by replacing other elements

  .push_back() -- it push the elements into a vector from the back
  thats mean it assign a element without replacing
  and it assigned to a new index after last element

  .pop_back() -- delete/remove an element from the back

  .insert()-- it can insert an element where you want to

  .erase()--it can remove an element which element you want to remove

  .swap()--it is used to swap the contents of one vector
  with another vector of same type .sizes may differ

  .clear()-- it is used to remove all the elements of the vector
**/
/** NOTE : all the INDEX we access that can be done
only with ITERATORS**/
/**assign**/
/// assign when declare
vector<int>ii(5,100);
cout<<"Check assigning value "<<endl;
for(auto ik=ii.begin();ik!=ii.end();ik++)
{
    cout<<*ik<<" ";
}
cout<<endl;
///assign  by .assign() function
ii.assign(6,200);
cout<<"Check assigning value for(.assign()) : "<<endl;
for(auto ik=ii.begin();ik!=ii.end();ik++)
{
    cout<<*ik<<" ";
}
cout<<endl;
///assign from a vector to another vector
vector<int>ip;
auto ik=ii.begin();
ip.assign(ik,ii.end()-3);
vector<int>vv(5,200);
vector<int>ipl;
ipl.assign(vv.begin()+2,vv.end()-1);
print(ipl);
///assign first 3 value from ii vector to ip vector
cout<<"Check assigning value (from vector to another vector) "<<endl;
for(auto ik=ip.begin();ik!=ip.end();ik++)
{
    cout<<*ik<<" ";
}
cout<<endl;
///assign from static array to vector
int a[]={5,7,4,6,8,3,7,8,8,4};
ip.assign(a,a+4);
/// from first element of  "a" array
///to the 4th element of "a" array assign to vector ip

cout<<"Check assigning value (assing array to vector "<<endl;
for(auto ik=ip.begin();ik!=ip.end();ik++)
{
    cout<<*ik<<" ";
}
cout<<endl;
/**push_back()**/
///in vector ip i want to add 3 8 9 10 in the back
ip.push_back(3);
ip.push_back(8);
ip.push_back(9);
ip.push_back(10);
cout<<"Checking Push_back() "<<endl;
for(auto ik=ip.begin();ik!=ip.end();ik++)
{
    cout<<*ik<<" ";
}
cout<<endl;
/// i want to remove the last element 10 from the vector
ip.pop_back();
cout<<"Checking pop_back()"<<endl;
for(auto ik=ip.begin();ik!=ip.end();ik++)
{
    cout<<*ik<<" ";
}
cout<<endl;
/** insert
*/
///simple insert
ip.insert(ip.begin(),11);
///first parameter is a iterator
///second parameter the value i wanna insert
cout<<"Checking insert value : "<<endl;
for(auto ik=ip.begin();ik!=ip.end();ik++)
{
    cout<<*ik<<" ";
}
cout<<endl;
ip.insert(ip.begin()+1,4,300);
///first parameter : iterator that pointing to the next index from
///begining
///that index is 1
///then second parameter defines how many time i want to insert the same value
///that is 4
///third parameter defines that value i want to insert
///that is 300
cout<<"CHecking inserted value "<<endl;
for(auto ik=ip.begin();ik!=ip.end();ik++)
{
    cout<<*ik<<" ";
}
cout<<endl;
///insert form another vector
ii.assign(5,117);
/// ii vector have 5 element that contains 117 value
ip.insert(ip.begin()+6,ii.begin()+1,ii.end()-1);
/**first parameter :
        is a iterator that pointing to the 6 index
        from where it will start inserting
    second parameter:
    defines the starting point of the element from where we start to
    take value for inserting. the 2nd index from the  ii vector
    third parameter:
    defines the ending point of the element where we stop
    to take value for inserting  ,the (last index-1) index
    from the ii vector;
**/
cout<<"CHecking inserted value(from another vector) "<<endl;
for(auto ik=ip.begin();ik!=ip.end();ik++)
{
    cout<<*ik<<" ";
}
cout<<endl;
///inserting from an array
int vb[]={10,20,30,40,50,60};
ip.insert(ip.end()-4,vb+1,vb+5);
cout<<"CHecking inserted value(from array) "<<endl;
for(auto ik=ip.begin();ik!=ip.end();ik++)
{
    cout<<*ik<<" ";
}
cout<<endl;

/**erase**/
///erase from specific index
ip.erase(ip.begin()+5);
///the element in 5th index will be removed
cout<<"CHecking erased value "<<endl;
for(auto ik=ip.begin();ik!=ip.end();ik++)
{
    cout<<*ik<<" ";
}
cout<<endl;
///erase from a specific range
ip.erase(ip.begin()+1,ip.begin()+8);
///first parameter starting index
///second parameter ending index
cout<<"CHecking erased value(from any range) "<<endl;
for(auto ik=ip.begin();ik!=ip.end();ik++)
{
    cout<<*ik<<" ";
}
cout<<endl;
/**swap**/
///how we swap to variables like that
ip.swap(ii);
cout<<"CHecking after swapping  value of ip "<<endl;
for(auto ik=ip.begin();ik!=ip.end();ik++)
{
    cout<<*ik<<" ";
}
cout<<endl;
cout<<"CHecking swappingvalue of ii"<<endl;
for(auto ik=ii.begin();ik!=ii.end();ik++)
{
    cout<<*ik<<" ";
}
cout<<endl;
/**clear**/
///all the value will be removed
///and the vector will be empty
ip.clear();
cout<<"checking clear function"<<endl;
if(ip.empty()==true)
{
    cout<<"EMPTY"<<endl;
}
else
{
    cout<<"FULL"<<endl;
}
}
