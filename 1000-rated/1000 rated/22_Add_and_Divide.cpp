#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve()
{
    ll a,b;
    cin >> a >> b;
    ll base_opt=0;
    ll temp_a=a;
    ll ans=INT_MAX;
    ll bt=b;
    if(b==1)
    {
       b+=1;
       base_opt=1;
    }
    ll increment,division,total_cost=0;
    for(ll i=0;i<35;i++)
    {
        increment=i;
        bt=b+i;
        division=0;
        while(a>0)
        {
            a/=bt;
            division+=1;
        }
        total_cost= base_opt+increment+division;
        ans=min(ans,total_cost);
        a=temp_a;
    } 
    cout << ans << "\n";
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