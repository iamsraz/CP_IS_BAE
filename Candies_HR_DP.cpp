#include "bits/stdc++.h"
#define ll long long
#define pb(a) push_back(a)
#define mpp(a,b) make_pair(a,b)
#define ff first
#define ss second
#define MOD 1000000007
using namespace std;

int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("oo.txt","w",stdout);
    ll i,j,k,t,l,n,m,d,x,y;
    cin>>n;
    string ch,ch1,ch2,ch3,ch4,ans1,ans2,sum;
    cin>>ch;
    if(n&1)
    {
        for(i=0;i<=n/2;i++)
        {
            ch1.push_back(ch[i]);
        }
        for(;i<n;i++)
        {
            ch2.push_back(ch[i]);
        }

        for(i=0;i<n/2;i++)
        {
            ch3.push_back(ch[i]);
        }
        for(;i<n;i++)
        {
            ch4.push_back(ch[i]);
        }
    }
    else
    {
        for(i=0;i<n/2;i++)
        {
            ch1.push_back(ch[i]);
        }
        for(;i<n;i++)
        {
            ch2.push_back(ch[i]);
        }

        for(i=ch1.length();i>=0;i--)
        {
            k=(ch1[i]-'0')+(ch2[i]-'0');
            ans.push_back(k+'0');
        }

        cout<<ans;
        return 0;
    }
    i=ch1.length()-1;
    j=ch2.length()-1;
    ll c=0;

    while(i>=0 && j>=0)
    {
        ll a;
        ll b;
        
        a=ch1[i--]-'0';
        b=ch2[j--]-'0';
        sum1.push_back((a+b+c)%10+'0');
        c=(a+b+c)/10;
    }

    while(i>=0)
    {
        ll a;
        a=ch1[i--];
        sum1.push_back((a+c)%10+'0');
        c=(a+c)/10;
    }


    while(j>=0)
    {
        ll a;
        a=ch2[j--];
        sum1.push_back((a+c)%10+'0');
        c=(a+c)/10;
    }
    reverse(sum1.begin(),sum1.end());




    i=ch3.length()-1;
    j=ch4.length()-1;
    ll c=0;

    while(i>=0 && j>=0)
    {
        ll a;
        ll b;
        
        a=ch3[i--]-'0';
        b=ch4[j--]-'0';
        sum2.push_back((a+b+c)%10+'0');
        c=(a+b+c)/10;
    }

    while(i>=0)
    {
        ll a;
        a=ch3[i--];
        sum2.push_back((a+c)%10+'0');
        c=(a+c)/10;
    }


    while(j>=0)
    {
        ll a;
        a=ch4[j--];
        sum2.push_back((a+c)%10+'0');
        c=(a+c)/10;
    }
    reverse(sum2.begin(),sum2.end());

    if(sum1<=sum2)
        cout<<sum1;
    else
        cout<<sum2;



    return 0;
}

// git push -u origin master