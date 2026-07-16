#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,k;
    cin >> n >> k;
    if(n%2==0)
        cout << "YES" << "\n";
    else if(k%2!=0)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";


        
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