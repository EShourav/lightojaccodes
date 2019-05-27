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
        int x1,y1,x2,y2;
        sf("%d %d %d %d",&x1,&y1,&x2,&y2);
        int q;
        sf("%d",&q);
        pf("Case %d:\n",ca);
        while(q--)
        {
            int x,y;
            sf("%d %d",&x,&y);
            if(x>x1 && x<x2 && y>y1 && y<y2)
                pf("Yes\n");
            else
                pf("No\n");
        }
    }
    return 0;
}
