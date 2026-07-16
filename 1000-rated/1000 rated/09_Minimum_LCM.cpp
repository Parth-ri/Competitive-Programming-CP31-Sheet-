#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    if(n%2==0){
        cout << n/2 << " " << n/2 << "\n";
        return;
    }
    long long largest_divisor=1;
    for(int i=3;i*i<=n;i++)
    {
        if(n%i==0)
        {
            largest_divisor=n/i;
            break;
        }
    }
    int a=largest_divisor;
    int b=n-largest_divisor;

    cout << a << " " << b << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t>0)
    {
        solve();
        t--;
    }
    return 0;
}