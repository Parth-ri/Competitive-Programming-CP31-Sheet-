#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n;
    cin >> n;
    vector<vector<ll>> array;
    ll global_min=1e9;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector<ll> temp_row;
        for (int j = 0; j < m; j++)
        {
            ll x;
            cin >> x;
            temp_row.push_back(x);
        }
        sort(temp_row.begin(), temp_row.end());
        global_min=min(global_min,temp_row[0]);
        array.push_back(temp_row);
    }

    int idx=0;
    int small = array[0][1];
    for (int i = 1; i < n; i++)
    {
        if (array[i][1] < small)
        {
            small = array[i][1];
            idx = i;
        }
    }

    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i != idx)
            sum += array[i][1];
        else
            sum += global_min;
    }
    cout << sum << "\n";

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
