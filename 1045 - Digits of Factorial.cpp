#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
int t,p;
long i,n,b;
double f[1000010];
int main()
{
    scanf("%d",&t);
    for(p=1; p<=1000000; p++)
        f[p]=log((p))+f[p-1];
    for(i=1; i<=t; i++)
    {
        scanf("%ld %ld",&n,&b);
        printf("Case %d: %ld\n",i,(long)(f[n]/(f[b]-f[b-1]))+1);
    }
    return 0;
}
