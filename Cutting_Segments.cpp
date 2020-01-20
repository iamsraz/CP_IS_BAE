#include<bits/stdc++.h>
using namespace std;
int dp[4005];
int find(int n,int x,int y,int z,int c)
{
    if(n<0)
    return 0;
    
    if(n==0)
    return c;
    
    if(dp[n]!=-1)
    return dp[n];
    int a,b,cc;
    a=find(n-x,x,y,z,c+1);
    b=find(n-y,x,y,z,c+1);
    cc=find(n-z,x,y,z,c+1);
    
    return dp[n]=max(a,max(b,cc));
}
int main()
 {
	int i,j,k,t,l,n,m,x,y,z;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    memset(dp,-1,sizeof(dp));
	    int arr[3];
	    cin>>arr[0]>>arr[1]>>arr[2];
	    sort(arr,arr+3);
	    cout<<find(n,arr[0],arr[1],arr[2],0)<<endl;
	}
	return 0;
}