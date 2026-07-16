#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<long long> b(n);
    for(auto &p:b) cin >> p;

    set<long long> s;
    for(int i=0;i<n;i++)
        s.insert(b[i]);
    if(s.size()==n)
        cout << "NO" << "\n";
    else
        cout << "YES" << "\n";
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