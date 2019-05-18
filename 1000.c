#include<stdio.h>
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int t, ca;
    scanf("%d",&t);
    for(ca=1; ca<=t; ca++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        int result = sum(a,b);
        printf("Case %d: %d\n",ca,result);
    }
    return 0;
}
