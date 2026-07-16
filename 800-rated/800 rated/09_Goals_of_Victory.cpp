#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int num=0;
    for(int i=0;i<n-1;i++)
    {
        int x;
        cin >> x;
        num+=x;
    }
    cout << -1*num << "\n";
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