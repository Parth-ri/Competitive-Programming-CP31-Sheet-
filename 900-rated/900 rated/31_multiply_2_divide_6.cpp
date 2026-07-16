#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int no_2=0;
    int no_3=0;
    while(n%2==0 || n%3==0)
    {
        if(n%2==0)
        {
            no_2+=1;
            n=n/2;
        }
        if(n%3==0)
        {
            no_3+=1;
            n=n/3;
        }
    }
    if(n>1)
    {
        cout << -1 << "\n";
        return;
    }
    if(no_3>=no_2)
    {
        cout << no_3 + (no_3-no_2) << "\n";
    }
    else 
    {
        cout << -1 << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t>0)
    {
        solve();
        t--;
    }
    return 0;
}