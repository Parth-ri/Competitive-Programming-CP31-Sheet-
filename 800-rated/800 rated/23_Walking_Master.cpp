#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int x,y;
    x=c-a;
    y=d-b;
    if(y>=0 && x<=y)
    {
        cout << 2*y-x << "\n";
    }
    else
        cout << -1 << "\n";
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