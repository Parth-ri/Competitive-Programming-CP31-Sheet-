#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long a,b;
    cin >> a >> b;
    if(a==b)
    {
        cout << 0 << " " << 0 << "\n";
        return;
    }
    long long g=abs(b-a);
    long long move_down=a%g;
    long long move_up=g-move_down;
    long long min_moves = min(move_down,move_up);
    cout << g << " " << min_moves << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t>0)
    {
        solve();
        t--;
    }
    return 0;
}