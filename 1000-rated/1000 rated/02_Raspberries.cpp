#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin >> n >> k;
    int min_ops=INT_MAX;
    int even_count=0;
    int x;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        int rem=x%k;
        if(x%2==0)
            even_count++;
        if(rem==0)
            min_ops=0;
        else
            min_ops=min(min_ops,k-rem);
    }
    int ops_via_even=INT_MAX;
    if(k==4)
    {
        if(even_count==0)
            ops_via_even=2;
        else if(even_count==1)
            ops_via_even=1;
        else
            ops_via_even=0;
    }

    cout << min(min_ops,ops_via_even) << "\n";
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