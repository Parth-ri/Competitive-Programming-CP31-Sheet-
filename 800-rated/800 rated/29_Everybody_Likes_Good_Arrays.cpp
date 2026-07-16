#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin >> a[i];
    
    int i=n-2;
    int prod=a[n-1];
    int cnt=0;

    while(i>=0)
    {
        if(prod%2 == a[i]%2)
        {
            i-=1;
        }
        else
        {
            cnt+=1;
            prod=a[i];
            i-=1;
        }
    }
    cnt+=1;
    cout << n-cnt << "\n";
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