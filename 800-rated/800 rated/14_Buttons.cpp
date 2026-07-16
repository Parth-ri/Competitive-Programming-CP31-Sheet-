#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b,c;
    cin >> a >> b >> c;
    if(c%2==0)
    {
        if(a>b)
            cout << "First" << "\n";
        else
            cout << "Second" << "\n";
    }
    else{
        if(a>=b)
            cout << "First" << "\n";
        else
            cout << "Second" << "\n";
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

