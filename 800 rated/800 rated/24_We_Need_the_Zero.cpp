#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,XOR=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int y;
        cin >> y;
        XOR=XOR^y;
    }
    if(n%2==0)
    {
        if(XOR==0)
            cout << 3 << "\n";
        else 
            cout << -1 << "\n";
    }
    else
    {
        cout << XOR << "\n";
    }
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