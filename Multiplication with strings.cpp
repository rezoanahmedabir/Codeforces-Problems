#include<bits/stdc++.h>
using namespace std;
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
int main()
{
    string s1,s2,s;
    cin>>s1>>s2;
    if((s1.at(0)=='-'||s2.at(0)=='-')&&(s1.at(0)!='-'||s2.at(0)!='-'))
       cout<<"-";
           if(s1.at(0) == '-' && s2.at(0)!='-')
        {
            s1[0]='0';
            //s1 = s1.substr(1);
        }
        else if(s1.at(0) != '-' && s2.at(0) == '-')
        {
            s2[0]='0';
            //s2 = s2.substr(1);
        }
        else if(s1.at(0) == '-' && s2.at(0) == '-')
        {
            s1[0]='0';
            s2[0]='0';
            //s1 = s1.substr(1);
            //s2 = s2.substr(1);
        }
        s=mul(s1,s2);
    cout<<s<<endl;
}
