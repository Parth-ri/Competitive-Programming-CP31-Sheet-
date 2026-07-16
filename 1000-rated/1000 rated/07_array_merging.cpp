#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];

    map<int,int> max_a,max_b;

    int streak=1;
    max_a[a[0]]=1;
    for(int i=1;i<n;i++)
    {
        if(a[i-1]==a[i]) streak+=1;
        else streak=1;
        max_a[a[i]]=max(streak,max_a[a[i]]);
    }

    streak=1;
    max_b[b[0]]=1;
    for(int i=1;i<n;i++)
    {
        if(b[i-1]==b[i]) streak+=1;
        else streak=1;
        max_b[b[i]]=max(streak,max_b[b[i]]);
    }

    int ans=0;
    for(auto p:max_a) ans=max(ans,max_a[p.first]+max_b[p.first]);
    for(auto p:max_b) ans=max(ans,max_a[p.first]+max_b[p.first]);

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