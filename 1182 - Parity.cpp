#include<stdio.h>
int main()
{
    int n,i;
    int deci;
    
    scanf("%d",&n);
    
    for(i=1; i<=n; i++)
    {
             int count=0;
             
             scanf("%d",&deci);
             
             while(deci!=0)
             {             
                           if(deci%2==1)
                           {
                                        count++;
                           }
                           deci=deci/2;
             }
             
             if(count%2==1)
             {
                           printf("Case %d: odd\n",i);
             }
             else
             {
                 printf("Case %d: even\n",i);
             }
    }
    
    return 0;
}
