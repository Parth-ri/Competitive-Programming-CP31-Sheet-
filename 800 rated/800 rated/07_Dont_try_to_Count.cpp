#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin >> n >> m;
    string x,s;
    cin >> x >> s;
    int cnt=0;
    bool found= false;
    while(cnt<=6)
    {
        if(x.find(s)!=-1)
        {
            found=true;
            break;
        }
        cnt+=1;
        x=x+x;
    }

    if(found)
        cout << cnt << "\n";
    else
        cout << -1 << "\n";

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