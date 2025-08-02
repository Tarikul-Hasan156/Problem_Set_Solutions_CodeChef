//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
// #include <string>
// #include <sstream>
// #include<set>
// #include<iomanip>
// #include<cstring>
// #include<cctype> //islower () issuper () for check the first char
// #include<algorithm>
// #include<cmath>
#define sortarray sort(arr,arr+x);
// #define rev reverse(s1.begin(), s1.end());
// #define uppertolowers1 transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
// #define uppertolowers2 transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
// #define descsort sort(arr, arr + n, greater<int>());
#define sp " "
#define forn(i, n) for (int i = 0; i < (n); i++)
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define maxelementofvector *max_element(digit.begin(),digit.end());
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
void solve ()
{
    ll x,q;cin>>x>>q;
    vector<ll>vv(x);
    for (auto  &x:vv)cin>>x;
    vector<ll>For,Bak;
    For.push_back(0),For.push_back(vv[0]);
    Bak.push_back(0),Bak.push_back(vv[x-1]);
    for (int i=0;i<x-1;i++)
    {
        For.push_back(__gcd(vv[i],vv[i+1]));
    }
    for (int i=x-1;i>0;i--)
    {
        Bak.push_back(__gcd(vv[i],vv[i-1]));
    }
    while (q--)
    {
        ll l,r;cin>>l>>r;
        cout<<__gcd(For[l-1],Bak[r+1])<<endl;
    }
    
}
int main ()
{
    speed;
    int tt;
    cin>>tt;
    while (tt--)
    {
        solve ();
    }
    return 0;
}