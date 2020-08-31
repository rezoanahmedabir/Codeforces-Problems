#include<bits/stdc++.h>
using namespace std;
string add(string s1,string s2);
string comp(string k);
string sub(string a,string b);
string mul(string s1,string s2);
string div(string s,long long ds);
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
string mul(string s1,string s2)
{
    int l1,l2;
    l1=s1.size();
    l2=s2.size();
    if(l1==0||l2==0) return "0";
    vector<int>r(l1+l2,0);
    int i,j,a,b,c=0,x=0,y=0;
    a=0;
    b=0;
    for(i=l1-1;i>=0;i--)
    {
        x=0;
        c=0;
        x=s1[i]-'0';
        b=0;
        for(j=l2-1;j>=0;j--)
        {
            y=0;
            y=s2[j]-'0';
            int sum=(x*y)+r[a+b]+c;
            c=(int)(sum/10);
            r[a+b]=sum%10;
            b++;
        }
        if(c>0)
            r[a+b]+=c;
        a++;
    }
     i=r.size()-1;
    while(i>=0&&r[i]==0) i--;
    if(i==-1)
        return "0";
    string s="";
    while(i>=0)
    {
        s.push_back((char)(r[i]+48));
        i--;
    }
       return s;
}
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
    string divisor;
    string d,k,res,dl;
    long long s=0;
    cin>>d>>divisor;
    for(long long i=0;i<divisor.size();i++)
    {
        s=(s*10)+(int)(divisor[i]-48);
    }
    k=div(d,s);
   /// cout<<k<<endl;

    ///cout<<mul(k,divisor)<<endl;
    res=sub(d,mul(k,divisor));
    cout<<res<<endl;
}
