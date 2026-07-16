#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int dot=0;
    if(s.find("...")!=-1)
        cout << 2 << "\n";
    else
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.')
                dot+=1;
        }
        cout << dot << "\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while(t>0)
    {
        solve();
        t--;
    }
    return 0;
}