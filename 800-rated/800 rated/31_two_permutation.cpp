#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,a,b;
    cin >> n >> a >> b;
    if(a==n && b==n)
    {
        cout << "Yes" << "\n";
        return;
    }
    if(n-(a+b)>1)
    {
        cout << "Yes" << "\n";
        return;
    }
    else{
        cout << "No" << "\n";
        return;
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