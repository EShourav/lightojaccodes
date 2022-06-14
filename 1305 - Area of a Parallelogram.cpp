#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    int x1,y1,x2,y2,x3,y3,x4,y4,area,result;
    
    scanf("%d",&n);
    
    for(i=1; i<=n; i++)
    {
             scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
             
             x4=x1+x3-x2;
             y4=y1+y3-y2;
             area=x1*(y2*1-y3*1)+y1*(1*x3-1*x2)+1*(x2*y3-x3*y2);
             
             if(area>0)
             {
                       result=area;
             }
             else
             {
                 result=area*(-1);
             }
             
             printf("Case %d: %d %d %d\n",i,x4,y4,result);
    }
    
    getch();
    return 0;
}
