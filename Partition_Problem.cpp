#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
bool find(int arr[], int l,int r,int sum)
{
    if(l>r || sum<0)
    return false;
    
    if(sum==0)
    return true;
    
    if(dp[l][sum]!=-1)
    return dp[l][sum];
    
    return dp[l][sum]=(find(arr,l+1,r,sum-arr[l]) | find(arr,l+1,r,sum));
}
int main()
 {
	int i,j,k,t,l,n,m,sum;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    memset(dp,-1,sizeof(dp));
	    sum=0;
	    int arr[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        sum+=arr[i];
	    }
	    if(sum&1)
	    {
	        cout<<"NO"<<endl;
	        continue;
	    }
	    if(find(arr,0,n,sum/2))
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	    
	}
	return 0;
}