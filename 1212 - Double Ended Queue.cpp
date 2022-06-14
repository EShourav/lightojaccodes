#include<iostream>
#include<queue>
#include<deque>
#include<string>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define sf scanf
#define pf printf
using namespace std;
int main()
{
    int t,cases;
    int n,m,ele;
    string s;
    cin>>t;
    for(cases=1; cases<=t; cases++)
    {
        cout<<"Case "<<cases<<":"<<endl;
        cin>>n>>m;
        deque<int>dq;
        while(m>0)
        {
            cin>>s;
            if(s=="pushLeft")
            {
                cin>>ele;
                if(dq.size()!=n)
                {
                    dq.push_front(ele);
                    cout<<"Pushed in left: "<<ele<<endl;
                }
                else
                    cout<<"The queue is full"<<endl;
            }
            else if(s=="pushRight")
            {
                cin>>ele;
                if(dq.size()!=n)
                {
                    dq.push_back(ele);
                    cout<<"Pushed in right: "<<ele<<endl;
                }
                else
                    cout<<"The queue is full"<<endl;
            }
            else if(s=="popLeft")
            {
                if(!dq.empty())
                {
                    cout<<"Popped from left: "<<dq.front()<<endl;
                    dq.pop_front();
                }
                else
                    cout<<"The queue is empty"<<endl;
            }
            else if(s=="popRight")
            {
                if(!dq.empty())
                {
                    cout<<"Popped from right: "<<dq.back()<<endl;
                    dq.pop_back();
                }
                else
                    cout<<"The queue is empty"<<endl;

            }
            m--;
        }
    }

    return 0;
}
