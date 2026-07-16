#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,sum=0;
    cin >> n;

    map<int,int> mpp;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        mpp[x]++;
    }
    if(mpp.size()==1)
        cout << "YES" << "\n";
    else if(mpp.size()==2)
    {
        auto it = mpp.begin();
        int count1= it->second;
        it++;
        int count2= it->second;

        if(abs(count1-count2)<=1)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
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