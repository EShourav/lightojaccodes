#include<bits/stdc++.h>

#define sf scanf
#define pf printf
using namespace std;
int main()
{
    int t;
    sf("%d",&t);
    getchar();
    for(int ca=1; ca<=t; ca++)
    {
        string s1;
        string s2;
        getline(cin,s1);
        getline(cin,s2);
        string a="";
        string b="";
        int j=0;
        for(int i=0; i<s1.length(); i++)
        {
            if(s1[i]>=65 && s1[i]<=90)
                s1[i]+=32;
            if(s1[i]!=' ')
            {
                a+=s1[i];
            }
        }
        j=0;
        for(int i=0; i<s2.length(); i++)
        {
            if(s2[i]>=65 && s2[i]<=90)
                s2[i]+=32;
            if(s2[i]!=' ')
                b+=s2[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if(a==b)
            pf("Case %d: Yes\n",ca);
        else
            pf("Case %d: No\n",ca);
    }
    return 0;
}
