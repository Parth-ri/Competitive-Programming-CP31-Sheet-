#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char,int> mp1;
    int unique1=0;
    for(int i=0;i<n;i++){
        if(mp1[s[i]]==0)
            unique1+=1;
        mp1[s[i]]+=1;
    }

    int max_split=0;
    
    int unique2=0;
    map<char,int> mp2;

    for(int last=n-1;last>0;last--)
    {
        if(mp2[s[last]]==0)
            unique2+=1;
        mp2[s[last]]+=1;
        
        mp1[s[last]]-=1;
        if(mp1[s[last]]==0)
            unique1-=1;
        
        max_split=max(max_split,unique1+unique2);
    }
    cout << max_split << "\n";
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