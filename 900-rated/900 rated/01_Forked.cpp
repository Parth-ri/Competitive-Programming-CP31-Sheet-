#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,xk,yk,xq,yq;
    cin >> a >> b;
    cin >> xk >> yk;
    cin >> xq >> yq;

    set<pair<int,int>> king_moves;
    set<pair<int,int>> queen_moves;

    int dx[] = {a,a,-a,-a,b,b,-b,-b};
    int dy[] = {b,-b,b,-b,a,-a,a,-a};
    for(int i=0;i<8;i++)
    {
        king_moves.insert({xk+dx[i],yk+dy[i]});
    }

    for(int i=0;i<8;i++)
    {
        queen_moves.insert({xq+dx[i],yq+dy[i]});
    }

    int fork_cnt=0;
    for(auto pos:king_moves)
    {
        if(queen_moves.count(pos)){
            fork_cnt+=1;
        }
    }

    cout << fork_cnt << "\n";
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