#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for(auto &p:a) cin >> p;
    long long opt=a[0];
    for(int i=1;i<n;i++)
    {
        opt=opt&a[i];
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