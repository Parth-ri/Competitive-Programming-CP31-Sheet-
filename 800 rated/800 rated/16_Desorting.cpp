#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i =0;i<n;i++)
        cin >> a[i];
    int diff=INT_MAX;
    for(int i=0;i<n-1;i++)
    {
        if((a[i+1]-a[i])<0){
            cout << 0 << "\n";
            return;
        }
        if((a[i+1]-a[i])<diff){
            diff = (a[i+1]-a[i]);
        }
    }
    cout << diff/2 + 1 << "\n";
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