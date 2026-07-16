#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin >> n >> k;

    vector<int> v(n);

    for(int i=0; i<n;i++)
        cin >> v[i];
    
    if(is_sorted(v.begin(),v.end()) || k>1)
        cout << "YES\n";
    else
        cout << "NO\n";
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
