/***
    Muntasher Morshed
                     ***/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ca=1; ca<=t; ca++)
    {
        int c,a,b;
        cin>>c;
        if(c<=10)
        {
            cout<<"0 "<<c<<endl;
        }
        else
        {
            a=c-10;
            b=c-a;
            cout<<a<<" "<<b<<endl;
        }
    }
    return 0;
}
