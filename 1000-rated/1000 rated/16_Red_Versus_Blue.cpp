#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,r,b;
    cin >> n >> r >> b;
    int x=r/(b+1);
    int rem=r%(b+1);
    for(int i=0;i<(2*b+1);i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<x;j++){
                cout << "R";
            }
            if(rem>0)
            {
                cout << "R";
                rem-=1;
            }
        }
        else
        {
            cout << "B";
        }
    }
    cout << "\n";
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