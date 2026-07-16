#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int k=1;
    while(k*2<n)
        k*=2;
    for(int i=k-1;i>=0;i--)
        cout << i << " ";
    for(int i=k;i<n;i++)
        cout << i << " ";
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
        solve();
        t--;
    }
    return 0;
}