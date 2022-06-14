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
int main()
{
    li t;
    sf("%ld",&t);
    li ca,i,len,b,n,k;
    string s;
    for(ca=1; ca<=t; ca++)
    {
        cin>>s>>b;
        n=0;
        if(s[0]=='-')
            i=1;
        else
            i=0;
        len=s.length();
        for(; i<len; i++)
        {
            n=n*10+(s[i]-'0');
            n=n%b;
        }
        if(n)
            pf("Case %ld: not divisible\n",ca);
        else
            pf("Case %ld: divisible\n",ca);

    }

    return 0;
}
