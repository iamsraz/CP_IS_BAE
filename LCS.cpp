#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int findd(int l1,int l2,string &ch1,string &ch2)
{
    if(l1==ch1.length() || l2==ch2.length())
    return 0;
    
    if(dp[l1][l2]!=-1)
    return dp[l1][l2];
    
    if(ch1[l1]==ch2[l2])
    return dp[l1][l2]=findd(l1+1,l2+1,ch1,ch2)+1;
    return dp[l1][l2]=max(findd(l1,l2+1,ch1,ch2),findd(l1+1,l2,ch1,ch2));
}
int main()
 {
	int i,j,k,t,l,n,m;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    memset(dp,-1,sizeof(dp));
	    string ch1,ch2;
	    cin>>ch1>>ch2;
	    
	    cout<<findd(0,0,ch1,ch2)<<endl;
	}
	return 0;
}