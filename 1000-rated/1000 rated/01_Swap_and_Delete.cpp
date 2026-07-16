#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int n=s.size();
    int ones=0;
    int zeros=0;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
            ones+=1;
        else
            zeros+=1;
    }
    char find = '1';
    int k=zeros;
    int m=ones;
    if(zeros>ones)
    {
        find = '0';
        k=ones;
        m=zeros;
    }
    int cnt=0;
    while(cnt<n)
    {
        if(s[cnt]==find)
        {
            if(k>0)
                k-=1;
            else
                break;
        }
        else
        {
            if(m>0)
                m-=1;
            else 
                break;
        } 
        cnt+=1;
    }
    cout << n-cnt << "\n";

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