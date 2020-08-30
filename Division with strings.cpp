#include<bits/stdc++.h>
using namespace std;
string div(string s,long long ds)
{
    string c;
    long long i=0,t=s[i]-'0';
    while(t<ds)
    {
        t=(t*10)+(s[++i]-'0');
    }
    while(s.size()>i){
        c+=(t/ds)+'0';
        t=((t%ds)*10)+s[++i]-'0';
    }
    if(c.length()==0)
        return "0";
    else
        return c;
}
int main()
{
    string s,s1;
    long long d;
    cin>>s1>>d;
    s=div(s1,d);
    cout<<s<<endl;


}
