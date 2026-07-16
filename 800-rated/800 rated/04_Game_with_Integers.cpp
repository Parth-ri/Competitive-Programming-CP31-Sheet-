#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if(n%3==0)
        cout << "Second" << "\n";
    else
        cout << "First" << "\n";
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