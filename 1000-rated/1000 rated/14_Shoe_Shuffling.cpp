#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<long long> s(n);
    for (auto &p : s)
        cin >> p;
    int start = 0, end = 0;
    vector<int> ans(n);
    for (int i = 1; i < n; i++)
    {
        if (s[start] == s[i])
        {
            end = i;
        }
        else
        {
            if (start == end)
            {
                cout << -1 << "\n";
                return;
            }
            ans[start] = end + 1;
            for (int j = start + 1; j <= end; j++)
            {
                ans[j] = j;
            }
            start = i;
            end = i;
        }
    }
    if (start == end)
    {
        cout << -1 << "\n";
        return;
    }
    ans[start] = end + 1;
    for (int j = start + 1; j <= end; j++)
    {
        ans[j] = j;
    }
    for(int i=0;i<n;i++)
        cout << ans[i] << " ";
    cout << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t > 0)
    {
        t--;
        solve();
    }
    return 0;
}