#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> p1, pair<int,int> p2)
{
    if(p1.first==p2.first)
        return p1.second < p2.second;
    return p1.first>p2.first;
}
void solve()
{
    int n,k;
    cin >> n >> k;
    vector<pair<int,int>> a(n);
    int x;
    int rem;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        rem = x%k;
        if(rem>0)
            a[i].first=rem;
        else
            a[i].first=k;
        a[i].second=i+1;
    }

    sort(a.begin(),a.end(),comp);

    for(int i=0;i<n;i++)
    {
        cout << a[i].second << " ";
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