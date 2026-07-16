#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for(auto &p:v) cin >> p;

    for(int i=0;i<n;i++)
    {
        if(v[i]==1)
        {
            v[i]+=1;
        }
    }
    for(int i=1;i<n;i++)
    {
        if(v[i]%v[i-1]==0)
            v[i]+=1;
    } 

    for(auto x: v) cout << x << " ";
    cout << "\n";
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