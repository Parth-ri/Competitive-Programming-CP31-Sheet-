#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n ;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin >> a[i];
    
    int cnt=0;
    int max_cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0){
            cnt++;
            if(cnt>max_cnt)
                max_cnt=cnt;
        }
        else{
            cnt=0;
        }
    }  
    cout << max_cnt << "\n";
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