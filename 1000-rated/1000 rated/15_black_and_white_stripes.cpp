#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    
    ll left=0;
    ll final=INT_MAX,whites=0;
    for(ll right=0;right<n;right++)
    {
        if((right)<k)
        {
            if(s[right]=='W')
            {
                whites+=1;
            }
        }
        else
        {
            if(s[right]=='W')
                whites+=1;
            if(s[left]=='W')
                whites-=1;
            left+=1;
        }
        if((right-left+1)==k)
        {
            final=min(final,whites);
        }
    }
    cout << final << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t > 0)
    {
        solve();
        t--;
    }
    return 0;
}