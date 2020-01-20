#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int i,j,k,t,l,n,m;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int arr[n];
	    int dp[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        dp[i]=arr[i];
	    }
	    
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<i;j++)
	        {
	            if(arr[i]>arr[j])
	            dp[i]=max(dp[i],dp[j]+arr[i]);
	        }
	    }
	    
	    cout<<(*max_element(dp,dp+n))<<endl;
	}
	return 0;
}