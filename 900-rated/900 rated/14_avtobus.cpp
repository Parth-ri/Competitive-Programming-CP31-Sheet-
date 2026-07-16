#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    if((n%4)%2!=0 || n<4)
    {
        cout << -1 << "\n";
        return;
    }
    long long max=n/4;
    long long min;
    if(n%6==0)
    {
        min=n/6;
    }
    else
    {
        min=n/6+1;
    }
    cout << min << " " << max << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t>0)
    {
        t--;
        solve();
    }
    return 0;
}