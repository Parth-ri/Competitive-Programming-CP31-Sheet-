#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve()
{
    ll a,b,n;
    cin >> a >> b >> n;
    vector<ll> x(n);
    for(int i=0;i<n;i++)
        cin >> x[i];
    ll time = 0;
    for(int i=0;i<n;i++)
    {
        time += b-1;
        b=1;
        b=min(b+x[i],a);  
    }
    cout << time+b<< "\n";
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