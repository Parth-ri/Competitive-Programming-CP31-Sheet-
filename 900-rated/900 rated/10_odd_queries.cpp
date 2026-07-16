#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve()
{
    int n,q;
    cin >> n >> q;
    vector<ll> pref(n+1);
    for(int i=1;i<=n;i++)
    {
        cin >> pref[i];
        pref[i]+=pref[i-1];
    }
    ll l,r,k,add;
    while(q>0)
    {
        cin >> l >> r >> k;
        add=pref[n]-(pref[r]-pref[l-1])+(r-l+1)*k;
        if(add%2==1)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
        q-=1;
    }
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