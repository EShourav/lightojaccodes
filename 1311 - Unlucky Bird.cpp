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
        double v1,v2,v3,a1,a2;
        sf("%lf %lf %lf %lf %lf",&v1,&v2,&v3,&a1,&a2);
        double t1=v1/a1;
        double t2=v2/a2;
        double t3=max(t1,t2);
        double s1=0.5*a1*t1*t1;
        double s2=0.5*a2*t2*t2;
        double d=s1+s2;
        double b=t3*v3;
        pf("Case %d: %lf %lf\n",ca,d,b);
    }
    return 0;
}
