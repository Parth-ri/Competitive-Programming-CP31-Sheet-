#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int x;
    int cnt_odd=0;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(x%2==1)
            cnt_odd+=1;
    }
    if(cnt_odd%2==0)
        cout << "YES";
    else
        cout << "NO";
    cout << "\n";
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