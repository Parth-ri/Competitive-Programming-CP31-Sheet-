#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int N,D;
    cin >> N >> D;

    vector<int> a(N);

    for(int i=0;i<N;i++)
        cin >> a[i];

    sort(a.begin(),a.end(),greater<int>());
    int start=0;
    int end=N-1;
    int cnt=0;
    int sum = a[start];
    while(end>=start)
    {
        int anchor_power = a[start];
        int total_needed = (D/anchor_power)+1;
        int weak_needed = total_needed-1;
        if(end-start>=weak_needed)
        {
            cnt+=1;
            start+=1;
            end-=weak_needed;
        }
        else
            break;
    }
    
    cout << cnt << "\n";
}

int main()
{
    solve();
    return 0;
}