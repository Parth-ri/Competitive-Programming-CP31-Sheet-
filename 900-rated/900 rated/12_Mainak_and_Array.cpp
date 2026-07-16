#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin >> v[i];
    
    int ans=v[n-1]-v[0];
    for(int i=0;i<n;i++)
    {
        if(i>0)
        {
            ans=max(ans,v[i]-v[0]);
        }
        if(i<n-1)
        {
            ans=max(ans,v[n-1]-v[i]);
        }
        if(i<n-1)
        {
            ans=max(ans,v[i]-v[i+1]);
        }
    }
    cout << ans << "\n";

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