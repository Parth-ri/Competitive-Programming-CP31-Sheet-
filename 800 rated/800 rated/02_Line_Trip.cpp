#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,x,max;
    cin >> n >> x;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    max=v[0];
    for(int i=0; i<n-1;i++){
        if(max<(v[i+1]-v[i])){
            max=v[i+1]-v[i];
        }
    }

    if(max<2*(x-v[n-1])){
        max=2*(x-v[n-1]);
    }
    cout << max << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t>0){
        solve();
        t--;
    }
    return 0;
}