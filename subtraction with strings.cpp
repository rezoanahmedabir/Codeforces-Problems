
#include<bits/stdc++.h>
using namespace std;
string add(string s1,string s2)
{
    string s;
    if(s1.size()<s2.size())
    {
        s1.swap(s2);
    }
    int l1=0,l2=0;
    l1=s1.size();
    l2=s2.size();

    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
   /// cout<<s1<<endl;
  ///  cout<<s2<<endl;
    int c=0,sum=0,a=0,i;
    for(i=0;i<l2;i++)
    {
        sum=(int)(s1[i]-'0'+s2[i]-'0'+c);
        a=(int)(sum%10);
        s.push_back((char)(a+48));
        c=(int)(sum/10);
    }
    for(i=l2;i<l1;i++)
    {
        sum=(int)(s1[i]-'0'+c);
        a=(int)(sum%10);
        s.push_back((char)(a+48));
        c=(int)(sum/10);
    }
    if(c!=0)
    {
        s.push_back(c+48);
    }
    reverse(s.begin(),s.end());
///    cout<<"summition = "<<s<<endl;
    return s;

}
string comp(string k)
{
    string c="";
    for(int i=0;i<k.size();i++)
    {
        c+='9'-k[i]+'0';
    }
   /// cout<<"9's compliment= "<<c<<endl;
    c=add(c,"1");
    return c;
}
string sub(string a,string b)
{
    if(a.length()<b.length())
    {
        swap(a,b);
    }
    int n1=a.length(),n2=b.length();
    int d=n1-n2;
    for(int i=0;i<d;i++)
    {
        b="0"+b;
    }
    string c=add(a,comp(b));
     if (c.length() > a.length()) {
        string::iterator it;

        /// Erase first bit
        it = c.begin();

        c.erase(it);

        /// Trim zeros at the begnning
        it = c.begin();

        while (*it == '0')
            c.erase(it);

        return c;
    }

    /// If both lengths are equal
    else {
       c= comp(c);
           /// cout<<"comp = "<<c<<endl;
        return c;
    }

}
int main()
{
    string s1,s2,s;
    cin>>s1>>s2;
    s=sub(s1,s2);
    if(s1.length()<s2.length())
    {
        cout<<"Result = -"<<s<<endl;
    }
    else if(s1.length()==s2.length())
    {
        if(s1.compare(s2)>0)
            cout<<"Result = "<<s<<endl;
        else if(s1.compare(s2)<0)
            cout<<"Result = -"<<s<<endl;
        else
            cout<<"Result = 0"<<endl;
    }
    else
    cout<<s<<endl;
}
