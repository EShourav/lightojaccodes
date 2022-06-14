/***
    Muntasher Morshed
        EShourav || UAP_Brainbone
    University of Asia Pacific
                                 ***/
#include<iostream>
#include<string>
#include<stdio.h>
#include<string.h>
#include<math.h>

#define sf scanf
#define pf printf
#define li long int
#define lli long long int
using namespace std;
int main()
{
    int t,ca;
    lli a,b,res,ans,counter;
    sf("%d",&t);
    for(ca=1; ca<=t; ca++)
    {
        sf("%lld %lld",&a,&b);
        counter=0;
        if(b-a==0)
        {
            res=a%3;
            if(res==0 || res==2)
                counter=1;
        }
        else if((a%3==0 && b%3==0) || (a%3==2 && b%3==2) || (a%3==2 && b%3==0))
        {
            res=b-a;
            ans=res/3;
            counter=res-ans+1;
        }
        else
        {
            res=b-a;
            ans=res/3;
            counter=res-ans;
        }
        pf("Case %d: %lld\n",ca,counter);
    }

    return 0;
}
