//b consistent &&  have patience + belief in yourself!
#include<bits/stdc++.h>
using namespace std;
#define  lli long long int//ohk
#define  vi vector<lli>
#define  pb push_back
#define  f first
#define  s second
#define  test  lli t;cin>>t;while(t--)
#define  pll  pair<lli,lli>
#define  nl cout<<"\n"
#define  MOD 1000000007
#define  lb lower_bound
#define  up upper_bound
#define  all(x) x.begin(),x.end()
#define  fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
 
lli n,m;
const lli d=10001;
char ar[d][d];
lli visited[d][d];
bool possible(int x,int y)
{
    if(x<n&&y<m&&x>=0&&y>=0)
        return true;
    return false;
}
void dfs(int x,int y)
{
    if(!possible(x,y)||visited[x][y]==1||ar[x][y]=='#')
        return ;
    visited[x][y]=1;
    dfs(x,y+1);
    dfs(x+1,y);
    dfs(x,y-1);
    dfs(x-1,y);
}
void solve()
{
   
    lli i,j,ans=0;
    cin>>n>>m;
  
    for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
        {cin>>ar[i][j];
        visited[i][j]=-1;
    }
}
    
    for(i=0;i<n;i++)
    {
     for(j=0;j<m;j++)
     {
        if(ar[i][j]=='.'&&visited[i][j]==-1)
        {
            dfs(i,j);
            ans++;
        }
     }
    }
    cout<<ans<<"\n";
 
 
   }
 
 
int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt" , "r" , stdin);
        freopen("output.txt" , "w" , stdout);
    #endif
    solve();
    
 
}
