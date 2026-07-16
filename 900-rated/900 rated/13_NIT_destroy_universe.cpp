#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for(auto &p:a) cin >> p;
    int front_zeros=0,back_zeros=0,total_zeros=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
            front_zeros+=1;
        else
            break;
    }
    if(front_zeros==n)
    {
        cout << 0 << "\n";
        return;
    }

    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==0)
            back_zeros+=1;
        else
            break;
    }

    sort(a.begin(),a.end());

    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
            total_zeros+=1;
        else
            break;
    }

    if((back_zeros+front_zeros)==total_zeros)
        cout << 1 << "\n";
    else
        cout << 2 << "\n";
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