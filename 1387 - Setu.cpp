#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
#include<deque>
#include<vector>
#include<map>
#include<iterator>
#include<string>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

#define li long int
#define lli long long int
#define sf scanf
#define pf printf
#define maxn 100000

using namespace std;

int main()
{
    int t,ca,taka,total,q;
    char s[10];
    sf("%d",&t);
    for(ca=1; ca<=t; ca++)
    {
        pf("Case %d:\n",ca);
        sf("%d",&q);
        total=0;
        while(q>0)
        {
            cin>>s;
            if(strcmp(s,"donate")==0)
            {
                cin>>taka;
                total+=taka;
            }
            if(strcmp(s,"report")==0)
            {
                cout<<total<<endl;
            }
            q--;
        }
    }

    return 0;
}
