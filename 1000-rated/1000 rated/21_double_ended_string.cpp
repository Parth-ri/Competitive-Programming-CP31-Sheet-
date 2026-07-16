#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string a,b;
    cin >> a >> b;
    string big=a, small=b;
    if(b.size()>a.size())
    {
        big=b;
        small=a;
    }
    int n=big.size(),m=small.size();
    int max_len=0;
    for(int len=1;len<=m;len++)
    {
        for(int i=0;i+len<=n;i++)
        {
            string sub=big.substr(i,len);
            if(small.find(sub)!=string::npos)
            {
                max_len=max(max_len,len);
            }
        }
    }
    cout << m+n-2*max_len << "\n";
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