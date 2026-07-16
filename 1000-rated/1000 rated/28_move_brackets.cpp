#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int balanced=0;
    int opt=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
            balanced+=1;
        else
            balanced-=1;
        if(balanced<0)
        {
            opt=max(opt,abs(balanced));
        }
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
