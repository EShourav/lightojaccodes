/*********                      Muntasher Morshed                     *********/
/*********                            Submit                          *********/
/*********                  University of Asia Pacific                *********/

#include<bits/stdc++.h>

#define sf scanf
#define sf1(a) scanf("%d",&a)
#define sf2(a,b) scanf("%d %d",&a,&b)
#define pf printf
#define pfC(ca) printf("Case %d: ",ca)
#define li long int
#define lli long long int
#define ll long long
#define loop0(i,n) for(i=0; i<n; i++)
#define loop1(i,n) for(i=1; i<=n; i++)
#define rloop0(i,n) for(i=n-1; i>=0; i--)
#define rloop1(i,n) for(i=n; i>0; i--)
#define maxn 100000
#define pi1 3.1415926535897932385
#define pi2 2*(acos(0.0))
#define pb push_back
#define fill(a,val) memset(a,val,sizeof(a))
using namespace std;
int main()
{
    int t,ca;
    int n,counter,x,mx;
    sf1(t);
    loop1(ca,t)
    {
        sf1(n);
        counter=0;
        int p=2;
        mx=0;
        while(n--)
        {
            sf1(x);
            if(x>p)
            {
                mx+=ceil((x-p)/5.0);
                p=x;
            }
        }
        pfC(ca);
        pf("%d\n",mx);
    }

    return 0;
}
