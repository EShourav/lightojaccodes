#include<stdio.h>
int main()
{
    int t,i,row,col,result;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d",&row,&col);
        if(row==1 || col==1)
            result=row*col;
        else if(row==2)
        {
            result=(col/4)*4;
            if(col%4==1)
                result+=2;
            else if(col%4>1)
                result+=4;
        }
        else if(col==2)
        {
            result=(row/4)*4;
            if(row%4==1)
                result+=2;
            else if(row%4>1)
                result+=4;
        }
        else
        {
            result=((row*col)+1)/2;
        }
        printf("Case %d: %d\n",i,result);
    }
    return 0;
}
