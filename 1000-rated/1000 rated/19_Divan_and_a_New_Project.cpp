#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i].first;
        a[i].second = i+1;
    } 
    
    sort(a.rbegin(),a.rend());
    vector<int> b(n+1);
    int j=1;
    long long total_time=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            b[a[i].second]=j;
            total_time+=2LL*j*a[i].first;
        }
        else
        {
            b[a[i].second]=-j;
            total_time+=2LL*j*a[i].first;
            j+=1;
        }
    }
    cout << total_time << " ";
    cout << "\n";
    for(int i=0;i<=n;i++)
        cout << b[i] << " ";
    cout << "\n";
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