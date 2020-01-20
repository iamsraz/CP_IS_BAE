
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* You need to complete this function */
void fun(int node,vector<int> v[],int n,int visit[],stack<int> &s)
{
    if(visit[node])
    return;
    
    visit[node]=1;
    for(int i=0;i<v[node].size();i++)
    {
        if(!visit[v[node][i]])
        fun(v[node][i],v,n,visit,s);
    }
    s.push(node);
}
int * topoSort(vector<int> v[], int n)
{
    stack<int> s;
    static int ans[105],i;
    int visit[105];
    for(i=0;i<=n;i++)
    {
        visit[i]=0;
    }
    // memset(visit,0,sizeof(visit));
    for(i=0;i<n;i++)
    fun(i,v,n,visit,s);
    i=0;
    int k;
    while(!s.empty())
    {
        k=s.top();
        s.pop();
        ans[i]=k;
        i++;
    }
    return ans;
}