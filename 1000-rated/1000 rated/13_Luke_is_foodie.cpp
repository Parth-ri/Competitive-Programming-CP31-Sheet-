#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve()
{
    ll n,x;
    cin >> n >> x;
    vector<ll> a(n);
    for(auto &p:a) cin >> p;

    ll first=a[0]-x,last=a[0]+x;
    ll i,j;

    ll change=0;

    for(ll s=1;s<n;s++)
    {
        i=a[s]-x;
        j=a[s]+x;

        if(j<first || last<i)
        {
            change+=1;
            first=i;
            last=j;
        }
        else
        {
            if(last>j)
            {
                last=j;
            }
            if(first<i)
            {
                first=i;
            }
        }
    }

    cout << change << "\n";
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