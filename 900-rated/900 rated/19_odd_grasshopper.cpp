#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long x, n;
    cin >> x >> n;
    long long disp = 0;
    int rem=n%4;
    if(rem==1) disp=-n;
    else if(rem==2) disp=1;
    else if(rem==3) disp=n+1;
    else disp=0;

    if (x % 2 != 0)
        cout << x -disp << "\n";
    else
        cout << x + disp << "\n";
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