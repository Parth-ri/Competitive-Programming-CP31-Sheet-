#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s,t;
    cin >> s >> t;
    map<char,int> q;
    int n1=s.size();
    int n2=t.size();
    for(int i=0;i<n2;i++)
    {
        q[t[i]]+=1;
    }
    int j=n2-1;
    for(int i=n1-1;i>=0;i--)
    {
        if(j>=0 && s[i]==t[j])
        {
            q[s[i]]-=1;
            j-=1;
        }
        else if(q[s[i]]>0)
        {
            cout << "NO" << "\n";
            return;
        }
    }
    if(j<0)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
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
