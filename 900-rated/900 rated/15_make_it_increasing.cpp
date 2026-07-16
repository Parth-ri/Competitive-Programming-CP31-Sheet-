#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);

    for(auto &p:a) cin >> p;

    long long opt=0;
    for(int i=n-1;i>0;i--)
    {
        if(a[i]==0)
        {
            cout << -1 << "\n";
            return;
        }
        while(a[i]<=a[i-1])
        {
            a[i-1]/=2;
            opt+=1;
        }
    }
    cout << opt << "\n";
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