#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);

        
         if(n==5)
        {
            ll k=0;
            vector<ll> v={2,1,3,4,5};
            for(ll i=0;i<n;i+=1)
            {
                if(i%2==0)
                {
                    k=k|v[i];
                }
                else
                {
                    k=k&v[i];
                }
            }
            cout<<k<<endl;
            for(ll i=0;i<n;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        else if(n==6)
        {
            ll k=0;
            vector<ll> v={1,2,4,6,5,3};
            for(ll i=0;i<n;i+=1)
            {
                if(i%2==0)
                {
                    k=k&v[i];
                }
                else
                {
                    k=k|v[i];
                }
            }
            cout<<k<<endl;
            for(ll i=0;i<n;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        else if(n==7)
        {
            ll k=0;
            vector<ll> v={2,4,5,1,3,6,7};
            for(ll i=0;i<n;i+=1)
            {
                if(i%2==0)
                {
                    k=k|v[i];
                }
                else
                {
                    k=k&v[i];
                }
            }
            cout<<k<<endl;
            for(ll i=0;i<n;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        else if(n==8)
        {
           ll k=0;
            vector<ll> v={2,4,5,1,3,6,7,8};
            for(ll i=0;i<n;i+=1)
            {
                if(i%2==0)
                {
                    k=k&v[i];
                }
                else
                {
                    k=k|v[i];
                }
            }
            cout<<k<<endl;
            for(ll i=0;i<n;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        else if(n==9)
        {
           ll k=0;
            vector<ll> v={2,4,5,6,7,1,3,8,9};
            for(ll i=0;i<n;i+=1)
            {
                if(i%2==0)
                {
                    k=k|v[i];
                }
                else
                {
                    k=k&v[i];
                }
            }
            cout<<k<<endl;
            for(ll i=0;i<n;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        else if(n==10)
        {
            ll k=0;
            vector<ll> v={1,2,3,4,5,6,8,10,9,7};
            for(ll i=0;i<n;i+=1)
            {
                if(i%2==0)
                {
                    k=k&v[i];
                }
                else
                {
                    k=k|v[i];
                }
            }
            cout<<k<<endl;
            for(ll i=0;i<n;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        else if(n>10 && n%2==0)
        {
            ll k=0;
            vector<ll> v(n);
            for(ll i=0;i<n;i++)
            {
                v[i]=i+1;
            }
            for(ll i=0;i<n;i+=1)
            {
                if(i%2==0)
                {
                    k=k&v[i];
                }
                else
                {
                    k=k|v[i];
                }
            }
            cout<<k<<endl;
            for(ll i=0;i<n;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
}

// 3366
//  3336366

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