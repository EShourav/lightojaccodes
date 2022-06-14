/***
    Muntasher Morshed
        UAP_BrainStorm
    University of Asia Pacific
                              ***/
#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
#include<queue>
#include<deque>
#include<set>
#include<map>
#include<iterator>
#include<list>
#include<vector>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

#define sf scanf
#define sf1(a) scanf("%d",&a)
#define pf printf
#define li long int
#define lli long long int
#define maxn 100000
#define pi acos(0.0)
#define loop(i,n) for(int i=0; i<n; i++)
using namespace std;
int binary(li bin)
{
    int reminder,sum=0,p=0;
    while(bin!=0)
    {
        reminder=bin%10;
        bin/=10;
        sum+=reminder*pow(2,p++);
    }
    return sum;
}
int main()
{
    int t,ca;
    int a[4];
    li b[4];
    sf1(t);
    for(ca=1; ca<=t; ca++)
    {
        sf("%d.%d.%d.%d",&a[0],&a[1],&a[2],&a[3]);
        sf("%ld.%ld.%ld.%ld",&b[0],&b[1],&b[2],&b[3]);
        b[0]=binary(b[0]);
        b[1]=binary(b[1]);
        b[2]=binary(b[2]);
        b[3]=binary(b[3]);
        if(a[0]==b[0] && a[1]==b[1] && a[2]==b[2] && a[3]==b[3])
            pf("Case %d: Yes\n",ca);
        else
            pf("Case %d: No\n",ca);
    }
    return 0;
}
