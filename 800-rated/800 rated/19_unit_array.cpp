#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int x;
    int neg=0;
    int pos=0;
    int min=0;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(x<0)
            neg+=1;
        else
            pos+=1;
    }
    if(neg>pos)
        min=(neg-pos+1)/2;
    pos=pos+min;
    neg=neg-min;
    if(neg%2!=0)
        min+=1;
    cout << min << "\n";

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