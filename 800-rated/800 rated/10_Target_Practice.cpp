#include<bits/stdc++.h>
using namespace std;
void solve()
{
    vector<vector<char>> v(10,vector<char>(10));
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin >> v[i][j];
        }
    }
    
    int total_score=0;
    int min_distance;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++)
        {
            if(v[i][j]=='X')
            {
                min_distance= min({i,j,9-i,9-j});
                total_score+=(min_distance+1);
            }
        }
    }
    cout << total_score << "\n";

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