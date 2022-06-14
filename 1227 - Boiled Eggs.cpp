/***
    Muntasher Morshed
        EShourav || UAP_Brainbone
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
    int t,ca,n,p,q;
    int arr[31];
    int i,count,weight,egg;
    sf("%d",&t);
    for(ca=1; ca<=t; ca++)
    {
        sf("%d %d %d",&n,&p,&q);
        for(i=0; i<n; i++)
            sf("%d",&arr[i]);
        egg=0;
        weight=0;
        for(i=0; i<n && i<p; i++)
        {
            weight+=arr[i];
            if(weight>q)
                break;
            egg++;
        }
        pf("Case %d: %d\n",ca,egg);
    }

    return 0;
}
