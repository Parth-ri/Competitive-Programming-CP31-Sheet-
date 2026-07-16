#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int max_less=0;
    int max_great=0;
    int count1=0;
    int count2=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='<'){
            count1+=1;
            max_less=max(max_less,count1);
        }
        else
        {
            count1=0;
        }

        if(s[i]=='>'){
            count2+=1;
            max_great=max(max_great,count2);
        }
        else
        {
            count2=0;
        }
    }

    cout << max(max_less,max_great)+1 << "\n";
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