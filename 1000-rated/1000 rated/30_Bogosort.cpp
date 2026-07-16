#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a.rbegin(),a.rend());
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
    cout << "\n";
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