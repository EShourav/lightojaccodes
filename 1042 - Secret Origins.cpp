#include<iostream>
#include<cstdio>
long long int one(long long int a)
{
    long long int n,count=0;
    for(n=1; n<=a; n=n*2)
        if((a&n)!=0)
            count++;
    return count;
}

long long int two(long long int num)
{
    long long a,i,dif;
    for(i=1; i<=num; i*=2)
        if((i&num)!=0)
        {
            a=num+i;
            break;
        }
    dif=one(num)-one(a);
    for(i=0; i<dif; i++)
        a+=(1<<i);
    return a;
}

int main()
{
    int t,i;
    long long int numb,result;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&numb);
        result=two(numb);
        printf("Case %d: %ld\n",i,result);
    }
    return 0;
}
