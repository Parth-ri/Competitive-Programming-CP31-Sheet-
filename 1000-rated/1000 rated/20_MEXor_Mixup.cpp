#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b;
    cin >> a >> b;

    int current_xor;

    if((a-1)%4==1) current_xor=1;
    else if((a-1)%4==2) current_xor=a;
    else if((a-1)%4==3) current_xor=0;
    else current_xor=a-1;

    int x=current_xor^b;
    if(x==0)
        cout << a << "\n";
    else if(x==a)
        cout << a+2 << "\n";
    else 
        cout << a+1 << "\n";

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t>0)
    {
        t--;
        solve();
    }
    return 0;
}