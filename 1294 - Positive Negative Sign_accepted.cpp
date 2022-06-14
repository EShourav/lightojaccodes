#include<iostream>
#include<cstdio>
int main()
{
    long long int T,i;
    long long int n,m;
    long long int div,sum;
    scanf("%lld",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%lld%lld",&n,&m);
        div=n/(2*m);
        if(n%(2*m)==0)
            sum=m*m*div;
        printf("Case %lld: %lld\n",i,sum);
        /*div=n/2;
        printf("Case %lld: %lld\n",i,m*div);*/
    }

    return 0;
}
