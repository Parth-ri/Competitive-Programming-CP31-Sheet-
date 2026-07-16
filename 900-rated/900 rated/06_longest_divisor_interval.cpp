#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    int interval=0;
    for(int i=1;i<50;i++)
    {
        if(n%(1LL*i)==0)
        {
            interval+=1;
        }
        else
        {
            break;
        }
    }
    cout << interval << "\n";
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