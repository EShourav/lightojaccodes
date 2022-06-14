/***
        Muntasher Morshed
            EShourav || UAP_Brainstorm
        University of Asia Pacific
                                          ***/
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>

#define sf scanf
#define pf printf
#define li long int
#define lli long long int
using namespace std;
int main()
{
    int i,t,ca;
    double ox,oy,ax,ay,bx,by;
    double o,a,b,angle,result;
    sf("%d",&t);
    for(ca=1; ca<=t; ca++)
    {
        sf("%lf %lf %lf %lf %lf %lf",&ox,&oy,&ax,&ay,&bx,&by);
        a=sqrt((ox-bx)*(ox-bx)+(oy-by)*(oy-by));
        b=sqrt((ox-ax)*(ox-ax)+(oy-ay)*(oy-ay));
        o=sqrt((bx-ax)*(bx-ax)+(by-ay)*(by-ay));
        angle=acos((b*b+a*a-o*o)/(2*b*a));
        result=a*angle;
        pf("Case %d: %.10lf\n",ca,result);
    }

    return 0;
}
