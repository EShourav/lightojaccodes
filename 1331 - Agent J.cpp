#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
#include<deque>
#include<map>
#include<vector>
#include<iterator>
#include<string>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

#define sf scanf
#define pf printf
#define li long int
#define lli long long int
#define maxn 100000
#define pi 3.14159265
using namespace std;
int main()
{
    int t,ca;
    double r1,r2,r3;
    double con_a,con_b,con_c;
    double a,b,c,s;
    double area_1,area_2,area_3,area_t,area;
    sf("%d",&t);
    for(ca=1; ca<=t; ca++)
    {
        sf("%lf %lf %lf",&r1,&r2,&r3);
        a=r2+r3;
        b=r1+r2;
        c=r1+r3;

        con_a=acos((b*b+c*c-a*a)/(2*b*c))*180/pi;
        con_b=acos((a*a+c*c-b*b)/(2*a*c))*180/pi;
        con_c=acos((a*a+b*b-c*c)/(2*a*b))*180/pi;

        s=(a+b+c)/2;
        area_t=sqrt(s*(s-a)*(s-b)*(s-c));
        area_1=(con_a/360)*pi*r1*r1;
        area_2=(con_b/360)*pi*r3*r3;
        area_3=(con_c/360)*pi*r2*r2;
        area=area_t-(area_1+area_2+area_3);
        pf("Case %d: %.8lf\n",ca,area);
    }

    return 0;
}
