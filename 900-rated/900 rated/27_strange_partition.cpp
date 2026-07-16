#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,x;
    cin >> n >> x;

    vector<long long> a(n);
    for(auto &p:a) cin >> p;

    long long min=0,max=0,sum=0;

    for(int i=0;i<n;i++)
        sum+=a[i];
    
    min=(sum+x-1)/x;
    cout << min << " ";
    
    for(int i=0;i<n;i++)
        max+=(a[i]+x-1)/x;  
    
    cout << max << " ";
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
        t--;
        solve();
    }
    return 0;
}