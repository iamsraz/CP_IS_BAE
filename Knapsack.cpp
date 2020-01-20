using namespace std;
int dp[1005][1005];
int visit[1005][1005];
int find(int arr1[],int arr2[],int l,int n,int w)
{
	if(w<0)
	return 0;
	if(l==n)
	return 0;
	
	if(visit[l][w])
	return dp[l][w];
	
	visit[l][w]=1;
	int ans=0;
	if(w>=arr2[l])
	ans=max(find(arr1,arr2,l+1,n,w),arr1[l]+find(arr1,arr2,l+1,n,w-arr2[l]));
	else
	ans=find(arr1,arr2,l+1,n,w);
	dp[l][w]=ans;
	return dp[l][w];
}
int main()
{
	int i,j,k,t,l,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		memset(visit,0,sizeof(visit));
		int arr1[n];
		int arr2[n];
		for(i=0;i<n;i++)
		cin>>arr1[i];
		
		for(i=0;i<n;i++)
		cin>>arr2[i];
		
		cout<<find(arr1,arr2,0,n,m)<<endl;
	}
	return 0;
}