#include <bits/stdc++.h>
using namespace std;
int next_prime(int x)
{
    while (true)
    {
        int k=0;
        for (int i=2;i*i<=x;i++)
        {
            if(x%i==0)
            {
                k=1;
                break;
            }
        }
        if(k==0)
        {
            return x;
            break;
        }
        x+=1;
    }
}
void solve()
{
    int d;
    cin >> d;
    int x1=next_prime(1+d);
    int x2=next_prime(d+x1);
    cout << x1*x2 << "\n";
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