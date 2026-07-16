#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long x,y,k;
    cin >> x >> y >> k;
    long long required_sticks=y*k+k;
    long long needed = required_sticks-1;
    long long gain_per_trade=x-1;

    long long stick_trades=(needed+gain_per_trade-1)/gain_per_trade;
    cout << stick_trades+k << "\n";
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