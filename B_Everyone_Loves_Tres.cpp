#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll tt; cin>>tt;
    while(tt--)
    {
        ll n; cin>>n;
        if(n==2)
        {
            cout<<66<<endl;
        }
        else if(n==3 || n==1)
        {
            cout<<-1<<endl;
        }
        else if(n%2==0)
        {
            string s;
            for(ll i=0;i<n-4;i++) s+='3';
            s+="3366";
            cout<<s<<endl;
        }
        else
        {
            string s;
            for(ll i=0;i<n-4;i++) s+='3';
            s+="6366";
            cout<<s<<endl;
        }


    }
}


//3366
// 3336366



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