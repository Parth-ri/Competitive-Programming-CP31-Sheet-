#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin >> n >> k;
    vector<int> a(n*k);
    for(int i=0;i<n*k;i++)
        cin >> a[i];
    int i=n*k-1-n/2;
    long long sum=0;
    while(k>0)
    {
        sum+=a[i];
        i-=n/2+1;
        k-=1;
    }
    cout << sum << "\n";
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