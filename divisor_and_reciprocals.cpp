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
    ll x,a,b;cin>>x>>a>>b;
    ll res=(x*b)/a;
    ll temp=res;
    set<ll>st;
    for (int i=2;i*i<=res;i++)
    {
        if (res%i==0)
        {
            while (res%i==0)
            {
                res/=i;
            }
            st.insert(i);
        }
    }
    if (res>1)st.insert(res);
    vector<ll>vv(st.begin(),st.end());
    ll sum=accumulate(vv.begin(),vv.end(),0LL);
    if (sum==x-1)cout<<temp<<endl;
    else cout<<-1<<endl;
    
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