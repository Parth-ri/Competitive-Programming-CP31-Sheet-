#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k,x;
    cin >> n >> k >> x;
    if(x!=1)
    {
        cout << "Yes" << "\n";
        cout << n << "\n";
            while(n>0)
            {
               cout << 1 << " " ;
               n=n-1;
            }
            cout << "\n";
    }

    else
    {
        if(n%2==0)
        {
            if(k==1)
            {
                cout << "No" << "\n";
                return;
            }
            cout << "Yes" << "\n";
            cout << n/2 << "\n";
            while(n>0)
            {
               cout << 2 << " " ;
               n=n-2;
            }
            cout << "\n";
        }
        else
        {
            if(k<3)
                cout << "No" << "\n";
            else
            {
                cout << "Yes" << "\n";
                cout << (n-3)/2+1 << "\n";
                cout << 3 << " " ;
                n=n-3;
                while(n>0)
                {
                    cout <<     2 << " " ;
                    n=n-2;
                }
                cout << "\n";
            }
        }
    }  
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