#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin >> v[i];
    sort(v.begin(),v.end());
    int freq=1;
    int max=1;
    for(int i=1;i<n;i++)
    {
        if(v[i-1]!=v[i])
            freq=1;
        else
            freq+=1;
        if(max<freq)
            max=freq;
    }
    int opt=0;
    while(n>max)
    {
        opt+=1;
        if(2*max<=n)
        {
            opt+=max;
        }
        else
        {
            opt+=n-max;
        }
        max+=max;
    }
    cout << opt << "\n";
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