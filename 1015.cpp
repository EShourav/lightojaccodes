#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int ca=1; ca<=t; ca++)
    {
        cout<<endl;
        int n;
        scanf("%d",&n);
        int a, sum=0;
        while(n--)
        {
            scanf("%d",&a);
            sum+=a;
        }
        printf("Case %d: %d\n",ca,sum);
    }
    return 0;
}
