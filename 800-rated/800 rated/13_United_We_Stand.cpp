#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a.begin(),a.end());

    if(a[0]==a[n-1]){
        cout << -1 << "\n";
        return;
    }
    int i=0;
    while(a[i]==a[i+1])
        i++;
    
    cout << i+1 << " " << n-(i+1) << "\n";

    for(int j=0;j<i+1;j++)
        cout << a[j] << " ";
    cout << "\n";
    for (int j=i+1;j<n;j++)
        cout << a[j] << " ";
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