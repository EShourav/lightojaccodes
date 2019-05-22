#include<bits/stdc++.h>

#define sf scanf
#define pf printf
using namespace std;
int main()
{
    int t;
    sf("%d",&t);
    for(int ca=1; ca<=t; ca++)
    {
        int a,b,c;
        sf("%d %d %d",&a,&b,&c);
        if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
            pf("Case %d: yes\n",ca);
        else
            pf("Case %d: no\n",ca);
    }
    return 0;
}
