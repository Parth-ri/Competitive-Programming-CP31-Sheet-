#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int start,end;
    start=0;
    end=n-1;
    while(end>start && s[start]!=s[end]){
        start+=1;
        end-=1;
    }
    cout << (end-start+1) << "\n";
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