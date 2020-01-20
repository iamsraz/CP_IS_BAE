#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
 {
	ll i,j,k,t,l,n,m;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    ll arr[n][n];
	    ll dp[n][n];
	    memset(dp,9999999,sizeof(dp));
	    
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    
	    queue< pair<int,int> > q;
	    
	    q.push(make_pair(0,0));
	    dp[0][0]=arr[0][0];
	    
	    while(!q.empty())
	    {
	        ll x,y;
	        x=q.front().first;
	        y=q.front().second;
	        q.pop();
	        if((x+1)<n && dp[x+1][y]>(dp[x][y]+arr[x+1][y]))
	        {
	            q.push(make_pair(x+1,y));
	            dp[x+1][y]=(dp[x][y]+arr[x+1][y]);
	        }
	        if((x-1)>=0 && dp[x-1][y]>(dp[x][y]+arr[x-1][y]))
	        {
	            q.push(make_pair(x-1,y));
	            dp[x-1][y]=(dp[x][y]+arr[x-1][y]);
	        }
	        if((y+1)<n && dp[x][y+1]>(dp[x][y]+arr[x][y+1]))
	        {
	            q.push(make_pair(x,y+1));
	            dp[x][y+1]=(dp[x][y]+arr[x][y+1]);
	        }
	        if((y-1)>=0 && dp[x][y-1]>(dp[x][y]+arr[x][y-1]))
	        {
	            q.push(make_pair(x,y-1));
	            dp[x][y-1]=(dp[x][y]+arr[x][y-1]);
	        }
	    }
	    
	    cout<<(dp[n-1][n-1])<<endl;
	}
	return 0;
}