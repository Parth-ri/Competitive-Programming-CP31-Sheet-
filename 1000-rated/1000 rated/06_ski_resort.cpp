#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> a(n);
    for (auto &p : a)
        cin >> p;
    ll ways = 0;
    ll len = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=q)
        {
            len+=1;
        }
        else
        {
            if(len>=k)
            {
                ll b= len-k+1;
                ways+=b*(b+1)/2;
            }
            len=0;
        }
    }
    if(len>=k)
    {
        ll b= len-k+1;
        ways+=b*(b+1)/2;
    }
    cout << ways << "\n";
        
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t>0)
    {
        solve();
        t--;
    }
    return 0;
}