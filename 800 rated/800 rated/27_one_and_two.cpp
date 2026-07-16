#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int twos=0;
    vector<int> a(n);
    int x;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(x==2)
            twos+=1;
        a[i]=x;
    }
    if(twos%2 !=0){
        cout << -1 << "\n";
        return;
    }

    if(twos==0){
        cout << 1 << "\n";
        return;
    }
    
    int k = twos/2;
    int j=0;
    while(k!=0)
    {
        if(a[j]==2)
            k-=1;
        j+=1;
    }
    cout << j << "\n";
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
