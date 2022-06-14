#include<iostream>
#include<stdio.h>
#include<stack>
#include<string>
#include<string.h>
#define sf scanf
#define pf printf
using namespace std;
int main()
{
    int t,i;
    string init_web,web,s;
    sf("%d",&t);
    for(i=1; i<=t; i++)
    {
        stack<string>st_per;
        stack<string>st_temp;
        init_web="http://www.lightoj.com/";
        st_per.push(init_web);
        pf("Case %d:\n",i);
        while(cin>>s)
        {
            if(s[0]=='Q')
                break;
            else if(s[0]=='B')
            {
                st_temp.push(st_per.top());
                st_per.pop();
                if(!st_per.empty())
                    cout<<st_per.top()<<endl;
                else
                {
                    pf("Ignored\n");
                    st_per.push(st_temp.top());
                    st_temp.pop();
                }
            }
            else if(s[0]=='F')
            {
                if(!st_temp.empty())
                {
                    cout<<st_temp.top()<<endl;
                    st_per.push(st_temp.top());
                    st_temp.pop();
                }
                else
                    pf("Ignored\n");
            }
            else if(s[0]=='V')
            {
                cin>>web;
                cout<<web<<endl;
                st_per.push(web);
                if(!st_temp.empty())
                    while(!st_temp.empty())
                        st_temp.pop();
            }
        }
        if(!st_per.empty())
            while(!st_per.empty())
                st_per.pop();
    }
    return 0;
}
