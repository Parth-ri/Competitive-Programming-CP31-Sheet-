#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve()
{
    ll w,h;
    cin >> w >> h;

    ll k1;
    cin >> k1;
    vector<ll> x1(k1);
    for(auto &p:x1) cin >> p;

    ll k2;
    cin >> k2;
    vector<ll> x2(k2);
    for(auto &p:x2) cin >> p;

    ll q1;
    cin >> q1;
    vector<ll> y1(q1);
    for(auto &p:y1) cin >> p;

    ll q2;
    cin >> q2;
    vector<ll> y2(q2);
    for(auto &p:y2) cin >> p;

    ll area1,area2;
    area1=max(x1[k1-1]-x1[0],x2[k2-1]-x2[0])*h;
    area2=max(y1[q1-1]-y1[0],y2[q2-1]-y2[0])*w;

    cout << max(area1,area2) << "\n";
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