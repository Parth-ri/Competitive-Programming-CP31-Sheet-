#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string n;
    cin >> n;
    int leng=n.size();
    cout << n[0] -'0' + 9*(leng-1) << "\n";
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