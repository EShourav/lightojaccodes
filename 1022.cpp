#include<bits/stdc++.h>

#define sf scanf
#define pf printf
#define pi 2*acos(0.0)
using namespace std;
int main()
{
    int t;
    sf("%d",&t);
    for(int ca=1; ca<=t; ca++)
    {
        double n;
        sf("%lf",&n);
        double nn = n*2;
        double area1 = nn*nn;
        double area2 = pi*n*n;
        double area = area1 - area2;
        pf("Case %d: %.2lf\n",ca,area);
    }
    return 0;
}
