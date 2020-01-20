#include<bits/stdc++.h>
#define maxarr(arr,n) *max_element(arr,arr+n)
#define MOD 1000000007
using namespace std;
string ch1,ch2,ch3;
vector<ll> v,v1,v2;
vector<string> vs;
vector< pair<ll,ll> > vp;
vector< vector<ll> > vv(100005);
map<ll,ll> mpp,mp1;
using namespace std;
//stack<ll> s;
//ll visit[100005];
//ll dp[100005];
ll dp[105][105];
ll visit[105][105];
ll find(string ch1,string ch2,ll n1,ll n2)
{
	if(n1==0)
	return n2;
	if(n2==0)
	return n1;
	if(visit[n1][n2])
	return dp[n1][n2];
	visit[n1][n2]=1;
	if(ch1[n1-1]==ch2[n2-1])
	{
		dp[n1][n2]=find(ch1,ch2,n1-1,n2-1);
		return dp[n1][n2];
	}
	ll a,b,c;
	a=find(ch1,ch2,n1-1,n2-1); // Replace
	b=find(ch1,ch2,n1-1,n2); // Delete
	c=find(ch1,ch2,n1,n2-1); // Insert
	dp[n1][n2]=1+min(a,min(b,c));
	return dp[n1][n2];
}
int main()
{
// 	input;
	ll i,j,k,t,l,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		cin>>ch1>>ch2;
		memset(visit,0,sizeof(visit));
		cout<<find(ch1,ch2,ch1.length(),ch2.length())<<endl;
	}
	return 0;
}