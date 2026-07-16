#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> pos;
    vector<int> neg;
    int x;
    for (int i = 0; i < m * n; i++)
    {
        cin >> x;
        if (x > 0)
            pos.push_back(x);
        else
            neg.push_back(x);
    }

    sort(neg.rbegin(), neg.rend());
    sort(pos.begin(), pos.end());
    int total_neg = neg.size();
    long long neg_sum = -accumulate(neg.begin(), neg.end(), 0LL);
    long long pos_sum = accumulate(pos.begin(), pos.end(), 0LL);

    if (neg.empty()) {
        cout << pos_sum << "\n";
        return;
    }
    
    int sub=neg[0];
    if (neg[0] == 0)
    {
        cout << pos_sum + neg_sum << "\n";
    }
    else
    {
        if (total_neg % 2 == 0)
            cout << pos_sum + neg_sum << "\n";
        else
        {
            if ((pos.size()!=0) && (-neg[0] > pos[0]))
                sub = -pos[0];
            cout << pos_sum + neg_sum + 2 * sub << "\n";
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        solve();
        t--;
    }
    return 0;
}