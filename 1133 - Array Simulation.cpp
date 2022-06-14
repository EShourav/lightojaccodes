/***
    Muntasher Morshed
        EShourav || UAP_Brainbone
    University of Asia Pacific
                                 ***/
#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>
#include<stdio.h>
#include<math.h>

#define sf scanf
#define pf printf
#define lli long long int
#define li long int
using namespace std;
int main()
{
    int t,ca;
    int n,m,i,j,x,y;
    char c;
    sf("%d",&t);
    for(ca=1; ca<=t; ca++)
    {
        sf("%d %d",&n,&m);
        int a[n],temp[n];
        for(i=0; i<n; i++)
            sf("%d",&a[i]);
        while(m--)
        {
            cin>>c;
            if(c=='S')
            {
                sf("%d",&x);
                for(i=0; i<n; i++)
                    a[i]+=x;
            }
            else if(c=='M')
            {
                sf("%d",&x);
                for(i=0;i<n; i++)
                    a[i]*=x;
            }
            else if(c=='D')
            {
                sf("%d",&x);
                for(i=0; i<n; i++)
                    a[i]/=x;
            }
            else if(c=='R')
            {
                j=0;
                for(i=n-1; i>=0; i--)
                {
                    temp[j]=a[i];
                    j++;
                }
                for(i=0; i<n; i++)
                    a[i]=temp[i];
            }
            else if(c=='P')
            {
                sf("%d %d",&x,&y);
                j=a[y];
                a[y]=a[x];
                a[x]=j;
            }
        }
        pf("Case %d:\n",ca);
        for(i=0; i<n; i++)
        {
            if(i==n-1)
            {
                pf("%d\n",a[i]);
                break;
            }
            pf("%d ",a[i]);
        }
    }

    return 0;
}
