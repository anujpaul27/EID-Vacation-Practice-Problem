#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a,b;
    cin>>a>>b;

    int aa[a];
    int bb[b];

    int sum1=0;
    int sum2=0;
    for (int i=0; i<a; i++)
    {
        cin>>aa[i];
        sum1+=aa[i];
    }

    for (int i=0; i<b; i++)
    {
        cin>>bb[i];
        sum2+=bb[i];
    }

    if (sum1==sum2)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }

    return 0;
}