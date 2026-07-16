#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int zero=0,one=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
            zero+=1;
        else
            one+=1;
    }
    int less=min(zero,one);
    if(less%2==0){
        cout << "NET" << "\n";
    }
    else{
        cout << "DA" << "\n";
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
        t--;
        solve();
    }
    return 0;
}