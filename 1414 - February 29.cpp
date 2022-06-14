#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<deque>
#include<map>
#include<vector>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define sf scanf
#define pf printf
using namespace std;
int value(char s[])
{
    if(strcmp(s,"January")==0)
        return 1;
    else if(strcmp(s,"February")==0)
        return 2;
    else if(strcmp(s,"March")==0)
        return 3;
    else if(strcmp(s,"April")==0)
        return 4;
    else if(strcmp(s,"May")==0)
        return 5;
    else if(strcmp(s,"June")==0)
        return 6;
    else if(strcmp(s,"July")==0)
        return 7;
    else if(strcmp(s,"August")==0)
        return 8;
    else if(strcmp(s,"September")==0)
        return 9;
    else if(strcmp(s,"October")==0)
        return 10;
    else if(strcmp(s,"November")==0)
        return 11;
    else if(strcmp(s,"December")==0)
        return 12;
    else
        return -1;
}
int main()
{
    int t,ca,i;
    int ms,me,ds,de,ys,ye;
    char s[100];
    int rem,add,count;
    sf("%d",&t);
    for(ca=1; ca<=t; ca++)
    {
        sf("%s %d, %d",&s,&ds,&ys);
        ms=value(s);
        sf("%s %d, %d",&s,&de,&ye);
        me=value(s);
        count=0;
        if(ms>2)
            ys++;
        if(me<2 || (me==2 && de<29))
            ye--;
        count=ye/4-(ys-1)/4;
        count-=ye/100-(ys-1)/100;
        count+=ye/400-(ys-1)/400;
        pf("Case %d: %d\n",ca,count);
    }
    return 0;
}
