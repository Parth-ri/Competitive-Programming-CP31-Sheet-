#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin >> n >> k;
    map<int,int> mpp;
    for(int i=0; i<n;i++)
    {
        int x;
        cin >> x;
        mpp[x]+=1;
    }
    if(mpp[k]>0)
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