#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin >> a[i];
    
    sort(a.begin(),a.end(),greater<int>());

    if(a[0]==a[n-1])
    {
        cout << "No" << "\n";
        return; 
    }

    if(a[0]==a[1])
        swap(a[0],a[n-1]);

    cout << "Yes" << "\n";

    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
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
