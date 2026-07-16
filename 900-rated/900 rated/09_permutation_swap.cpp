#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int x;
    int diff;
    int final=0;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        diff=abs(x-(i+1));
        if(diff>0)
        {
            final=gcd(final,diff);
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
    while(t>0)
    {
        t--;
        solve();
    }
    return 0;
}