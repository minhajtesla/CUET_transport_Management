#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll tt; cin>>tt;
    while(tt--)
    {
        ll n,m,r,c; cin>>n>>m>>r>>c;
        if(n==r) cout<<n*m-((r-1)*m+c)<<endl;
        else if(n>r)
        {
            ll ans=m-c;
            ans+=(n-r)*(m-1);
            ans+=m*(n-r);
            cout<<ans<<endl;
        }


    }
}

// r=1 c=2

// 1 1 1 =1
// 1 1 1 =3+2


// r=1 c=1

// 1 1 1 1 
//  1 1 1   3
// 1 1 1 1   4+3
// 1 1 1 1   4+3

// 17

// n=4 