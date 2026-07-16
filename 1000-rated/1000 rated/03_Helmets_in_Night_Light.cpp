#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n,p;
    cin >> n >> p;
    vector<ll> a(n);
    for(int i=0;i<n;i++)
        cin >> a[i];
    
    vector<ll> b(n);
    for(int i=0;i<n;i++)
        cin >> b[i];
    
    vector<pair<ll,ll>> mp(n);
    for(int i=0;i<n;i++)
    {
        mp[i].first=b[i];
        mp[i].second=a[i];
    }
    
    sort(mp.begin(),mp.end());
    int i=0;
    int count=1;
    ll cost = p;
    while(i<n && mp[i].first<=p && count<n)
    {
        if((count+mp[i].second)<=n)
        {
            cost+=mp[i].first*mp[i].second;
            count+=mp[i].second;
        }
        else
        {
            cost+=mp[i].first*(n-count);
            count+=(n-count);
        }
        i+=1;
    }
    if(count<n)
    {
        cost+=p*(n-count);
    }
    cout << cost << "\n";
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