#include<bits/stdc++.h>
using namespace std;
long long int fact[22];
void factorial()
{
    fact[0]=1;
    for(int i=1; i<=20; i++)
    {
        fact[i]=fact[i-1]*i;
        //cout<<fact[i]<<endl;
    }
}
int main()
{
    factorial();
    int t;
    scanf("%d",&t);
    for(int ca=1; ca<=t; ca++)
    {
        long long int n;
        scanf("%lld",&n);
        stack<int>stk;
        int i=20;
        while(i>=0)
        {
            if(fact[i]<=n)
            {
                n-=fact[i];
                stk.push(i);
            }
            i--;
        }
        printf("Case %d: ",ca);
        if(n==0)
        {
            while(stk.size()!=1)
            {
                printf("%d!+",stk.top());
                stk.pop();
            }
            printf("%d!\n",stk.top());
            stk.pop();
        }
        else
        {
            printf("impossible\n");
        }
    }
    return 0;
}
