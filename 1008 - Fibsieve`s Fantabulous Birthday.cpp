#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        long long int sec,root,fix,mid,col,row,dis;
        scanf("%lld",&sec);

        root=sqrt(sec);
        if(root*root==sec)
        {
            if(root%2==0)
            {
                printf("Case %d: %lld 1\n",i,root);
            }
            else
            {
                printf("Case %d: 1 %lld\n",i,root);
            }
        }
        else
        {
            fix=root+1;
            mid=(root*root)+fix;
            if(root%2==0)
            {
                if(sec>mid)
                {
                    dis=sec-mid;
                    col=fix-dis;
                    printf("Case %d: %lld %lld\n",i,col,fix);
                }
                else
                {
                    dis=mid-sec;
                    row=fix-dis;
                    printf("Case %d: %lld %lld\n",i,fix,row);
                }
            }
            else
            {
                if(sec>mid)
                {
                    dis=sec-mid;
                    row=fix-dis;
                    printf("Case %d: %lld %lld\n",i,fix,row);
                }
                else
                {
                    dis=mid-sec;
                    col=fix-dis;
                    printf("Case %d: %lld %lld\n",i,col,fix);
                }
            }
        }
    }

    return 0;
}
