#include <bits/stdc++.h>
using namespace std;
int get_deletion(string s,char target1, char target2)
{
    int n=s.size();
    int pos1=-1;
    int pos2=-1;
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]==target2)
        {
            pos2=i;
            break;
        }
    }
    if(pos2==-1) return 1e9;

    for(int i=pos2-1;i>=0;i--)
    {
        if(s[i]==target1)
        {
            pos1=i;
            break;
        }
    }
    if(pos1==-1) return 1e9;

    return n-pos1-2;

}
void solve()
{
    string s;
    cin >> s;
    int ans=1e9;
    ans=min(ans,get_deletion(s,'0','0'));
    ans=min(ans,get_deletion(s,'2','5'));
    ans=min(ans,get_deletion(s,'5','0'));
    ans=min(ans,get_deletion(s,'7','5'));

    cout << ans << "\n";
    
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