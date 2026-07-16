#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,k;
    cin >> n >> k;
    vector<long long> v(n);
    for(int i=0;i<n;i++)
        cin >> v[i];
    sort(v.begin(),v.end());
    long long current_valid_length=1;
    long long max_keep=1;
    for(int i=0;i<n-1;i++)
    {
        if(v[i+1]-v[i]<=k)
        {
            current_valid_length+=1;
        }
        else
        {
            current_valid_length=1;
        }
        if(max_keep<current_valid_length)
        {
            max_keep=current_valid_length;
        }
    }
    cout << n-max_keep << "\n";
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