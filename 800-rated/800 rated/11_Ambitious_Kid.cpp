#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v[i]=abs(x);
    }
    sort(v.begin(),v.end());
    cout << v[0];
}
int main()
{
    solve();
    return 0;
} 