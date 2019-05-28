#include<bits/stdc++.h>

#define sf scanf
#define pf printf
using namespace std;
int main()
{
    int t;
    sf("%d",&t);
    for(int ca=1; ca<=t; ca++)
    {
        int student;
        sf("%d",&student);
        string name, thief, victim;
        int a,b,c;
        int tAmount=0, vAmount=1000010, amount;
        while(student--)
        {
            cin>>name>>a>>b>>c;
            amount=a*b*c;
            if(amount>tAmount)
            {
                tAmount = amount;
                thief = name;
            }
            if(amount<vAmount)
            {
                vAmount = amount;
                victim = name;
            }
        }
        if(amount == tAmount && amount == vAmount)
            pf("Case %d: no thief\n",ca);
        else
            cout<<"Case "<<ca<<": "<<thief<<" took chocolate from "<<victim<<endl;
    }
    return 0;
}
