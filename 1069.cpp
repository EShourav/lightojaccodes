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
        int me, lift;
        sf("%d %d",&me, &lift);
        int liftToMe = abs(me-lift);
        long long int time = (liftToMe*4) + 3 + 5 + 3 + (me*4) + 8;
        pf("Case %d: %lld\n",ca,time);
    }
    return 0;
}
