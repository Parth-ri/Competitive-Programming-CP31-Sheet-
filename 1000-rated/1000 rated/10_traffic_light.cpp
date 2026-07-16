#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve()
{
    int n;
    char c;
    string s;
    cin >> n;
    cin >> c >> s;
    s+=s;
    ll cross_c_i=-1;
    ll ans=0;

    for(int i=0;i<2*n;i++)
    {
        if(s[i]==c && cross_c_i==-1)
        {  
            cross_c_i=i;
        }
        if(s[i]=='g' && cross_c_i!=-1)
        {
            ans=max(ans,(ll)i-cross_c_i);
            cross_c_i=-1;
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
        solve();
        t--;
    }
    return 0;
}