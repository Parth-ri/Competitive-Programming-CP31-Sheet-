#include<bits/stdc++.h>
using namespace std;
using ll=long long;
bool is_Fair(ll x)
{
    ll b=x;
    while(x>0)
    {
        int digit=x%10;
        if(digit!=0)
        {
            if(b%digit!=0)
                return false;
        }
        x/=10;
    }
    return true;
}

void solve()
{
    ll n;
    cin >> n;
    ll x=n;
    while(true)
    {
        if(is_Fair(x)==1)
        {
            cout << x << "\n";
            return;
        }
        x+=1;
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