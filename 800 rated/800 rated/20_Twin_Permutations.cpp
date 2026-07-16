#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int x;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        cout << n+1-x << " ";
    }
    cout << "\n";
}
int main()
{
    int t;
    cin >> t;
    while(t>0)
    {
        solve();
        t--;
    }
    return 0;
}   