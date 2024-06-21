#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string t, s;
    cin>>t>>s;

    int count=0;
    int tt=t.size()-1;
    int ss=s.size()-1;

    while (ss >=0 || tt>=0)
    {
        if (t[tt]==s[ss])
        {
            count++;
        }
        else 
        {
            break;
        }       
        tt--;
        ss--;
    }
    int result= t.size() + s.size();
    result -=count*2;
    cout<<result;   

    return 0;
}