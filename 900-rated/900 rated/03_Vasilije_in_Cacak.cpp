#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,k,x;
    cin >> n >> k >> x;
    long long min_sum=k*(k+1)/2 ;
    long long max_sum = k*(2*n-k+1)/2;

    if((max_sum >=x) && (min_sum <=x))
        cout << "Yes" << "\n";
    else
        cout << "No" << "\n";
    
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