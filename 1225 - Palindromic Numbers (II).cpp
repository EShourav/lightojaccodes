#include<stdio.h>
int main()
{
    int n,i,numb,rem,temp;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
             int reverse=0;

             scanf("%d",&numb);

             temp=numb;

             while(temp!=0)
             {
                           rem=temp%10;
                           reverse=reverse*10+rem;
                           temp/=10;
             }

             if(reverse==numb)
             {
                              printf("Case %d: Yes\n",i);
             }
             else
             {
                 printf("Case %d: No\n",i);
             }
    }

    return 0;
}
