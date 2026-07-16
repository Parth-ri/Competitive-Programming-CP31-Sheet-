#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long a, b;
    cin >> a >> b;
    long long twos = 0;
    long long res;
    if (a == b)
    {
        cout << 0 << "\n";
        return;
    }
    else if (a < b)
    {
        if (b % a == 0)
        {
            res = b / a;
        }
        else
        {
            cout << -1 << "\n";
            return;
        }
    }
    else
    {
        if (a % b == 0)
        {
            res = a / b;
        }
        else
        {
            cout << -1 << "\n";
            return;
        }
    }
    while (res % 2 == 0)
    {
        twos += 1;
        res = res / 2;
    }
    if (res != 1)
    {
        cout << -1 << "\n";
        return;
    }
    if(twos%3==0)
        cout << twos/3 << "\n";
    else
        cout << (twos-twos%3)/3+1 << "\n";  
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