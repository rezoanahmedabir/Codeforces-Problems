#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1("Badlalalalax");
    int length;
    length=s1.length();///strlen() function
    cout<<length<<endl;
    length=s1.size();///strlen() function
    cout<<length<<endl;
    cout<<s1.at(2)<<endl;///parameter will be the index no
    ///s1.at() work like s1[2]
    cout<<s1.front()<<endl;
    ///s1.front() works like  s1[0]
    cout<<s1.back()<<endl;
    ///s1.back() works like s1[length-1]
    ///we can print the whole string with a char pointer
    char *ch;
    ch=&s1[0];
cout<<ch<<endl;
///we can add something with a string which have initialized
///before by .append("paremeter will be a string") function
s1.append(" HII BIG HERO");
cout<<s1<<endl;
///we can use string variable as parameter
string s2(" Mua Moa ");
s1.append(s2);
cout<<s1<<endl;
///.append() function is work like s1+="Mua Moa"
///lets see
s1+="Momoa momoa";
cout<<s1<<endl;
///and this
s1+=s2;
cout<<s1<<endl;
///we can add particular part of a string with append
string s3("BOURBON");
s1.append(s3,1,s3.size());
///first parameter : from which string we want to import
///second parameter : from which index we want to append the string
///third parameter : from starting index  in which index we should stop appending
 cout<<s1<<endl;
 ///.find() function
 /// here we have a constant npos whose value is -1
 if(s1.find(s2)!=string::npos)
{
    cout<<"Found it at this place "<<s1.find(s2)<<endl;
}
///looking at the result we can assume that
/** .find() function returns the starting index of the string in the main
string ,if it couldn't be found it returns -1 thats why npos value is -1
*/
/// .substr(a,b)
/**
function returns  "a" sub string of "b" length
starting index is"a"
*/
cout<<s1.substr(13,3)<<endl;
///  the result (s1[13]s1[14]s1[15])HII
///if we not pass the second argument
///it will print all the character after "a" index(including "a")
cout<<s1.substr(25)<<endl;

/// .erase(a,b) function deletes "b" characters starting at "a" index
cout<<s1.erase(26,31)<<endl;
/// starting from 26 and deletes 31 characters
///iterator with erase
s1.erase(s1.begin()+16,s1.end()-4);
cout<<s1<<endl;
///replace(a,b,string)
///starting from "a" index replace "b" characters with given "string"
s1.replace(13,3,"VAI");
///starting from index no 12 replaced 3 characters with "VAI"
cout<<s1<<endl;
/// .empty() it checks that your given string is empty or not
if(!s1.empty())
    cout<<"1"<<endl;
s2.clear();
if(!s2.empty())
    cout<<"2"<<endl;
else
    cout<<"-1"<<endl;
///.push_back appends a character
s1.push_back(' ');
s1.push_back('E');
cout<<s1<<endl;
/// .insert() by  this we can insert any string at any place in the main string
s1.insert(12," BALA");
/// at place 12  placed A then sequentially bir placed after that
cout<<s1<<endl;
s2=" BIG HERO SIX ";
s1.insert(17,s2,0,13);
///at place 17 s2 will placed from index 0 to 13 (included)
cout<<s1<<endl;
s1.insert(30," THE MEG",4);
///at place 30  " THE MEG" will placed from 0 index to 3 total 4 characters
cout<<s1<<endl;
///swap()  to swap a string to other
s3.swap(s1);
s1.swap(s2);
s2.swap(s3);
///by doing this we have swap the strings s1 and s2
cout<<"s1  :  "<<s1<<endl;
cout<<"s2  :  "<<s2<<endl;
///to delete last character we use .pop_back()
s2.pop_back();
cout<<s2<<endl;
///compare two string
/**
value	|  relation between compared string and comparing string
----------|-----------------------------------------------------------------------------------------------------------------------------------
0	        | They compare equal
----------|-----------------------------------------------------------------------------------------------------------------------------------
<0	    |  Either the value of the first character that does not match is lower in the compared string,
            | or all compared characters match but the compared string is shorter.
 ---------|-----------------------------------------------------------------------------------------------------------------------------------
>0	    |  Either the value of the first character that does not match is greater in the compared string,
            | or all compared characters match but the compared string is longer.
----------|-----------------------------------------------------------------------------------------------------------------------------------
**/
s1="Milk Shake";
s2="Mango Shake";
if(s1.compare(s2)!=0)
{
    cout<<"NOT EQUAL"<<endl;
}
if(s1.compare(5,5,"Shake")==0)
{
    ///means that  from the index 5 in s1 does it have 5 characters in sequence
    ///or  string that contains 5 charaters and is it "Shake"? or not
    ///s1  from index 5  and string that contains 5 character "Shake"
    ///is compared to "Shake" in the last parameter
    cout<<"FOUND"<<endl;
}
if(s1.compare(s2.size()-5,5,"Shake"))
{
     ///means that  from the index (s2.size()-5) in s1 does it have 5 characters in sequence
    ///or  string that contains 5 charaters and is it "Shake"? or not
    ///s1  from index 5  and string that contains 5 character "Shake"
    ///is compared to "Shake" in the last parameter
        cout<<"FFFFF"<<endl;
}
if(s1.compare(5,5,s2,6,5)==0)
{
    cout<<"OOOO"<<endl;
    /**
    parameters are
    1.index of starting point in the given string s1
    2.how many characters will be in the string from s1 to be compared
    3.from which string we will compare the evaluated string
    4.index of  starting point in s2 from which we will start comparing
    5.how many characters should be compared
    so in this part
    we have s1 and s2
    from s1 we evaluate a string from index 5 and we took 5 characters from s1
    that form a string like "Shake"
    from s2 we evaluate a string from index 6 and we took 5 characters from s2
    that form a string like "Shake"
    then we compare it and results a zero
    so it prints oooo
    **/
    ///getline function
    ///terminates the line when "\n" is typed
    getline(cin,s3);
    cout<<s3<<endl;
}
}
