#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    
    map<char,int> a;
    for(int i=0;i<n;i++)
    {
        a[s[i]]+=1;
    }
    int cnt_odds=0;

    for(auto pos:a)
    {
        if(pos.second%2==1)
            cnt_odds+=1;
    }

    if(cnt_odds-1<=k)
        cout << "Yes" << "\n";
    else
        cout << "No" << "\n";
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