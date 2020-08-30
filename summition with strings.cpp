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
    return s;

}
int main()
{
    string s1,s2,s;
    cin>>s1>>s2;
    s=add(s1,s2);
    cout<<"RESULT ="<<s<<endl;
}
