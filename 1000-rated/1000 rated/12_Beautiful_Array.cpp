#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,k,b,s;
    cin >> n >> k >> b >> s;
    if(k*b>s)
    {
        cout << -1 << "\n";
        return;
    }

    if((s>k*b+(k-1)*n))
    {
        cout << -1 << "\n";
        return;
    }

    long long first_element_remainder = min(s - (b * k), k - 1);
    cout << (b * k) + first_element_remainder << " ";
    
    s -= ((b * k) + first_element_remainder);
    n -= 1;
    while(s>=(k-1) && n>0)
    {
        cout << k-1 << " ";
        s-=(k-1);
        n-=1;
    }

    if (n > 0) {
        cout << s << " ";
        n -= 1;
    }
    
    while(n>0)
    {
        cout << 0 << " ";
        n--;
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
        solve();
        t--;
    }
    return 0;
}