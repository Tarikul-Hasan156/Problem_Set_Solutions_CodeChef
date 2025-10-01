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
bool is_prime(ll x)
{
    if (x==1)return false;
    if (x<4)return true;
    if (x%2==0)return false;
    bool flag=false;
    for (int i=2;i*i<=x;i++)
    {
        if (x%i==0)return false;
    }
    return true;
}
void solve ()
{
    ll x;cin>>x;
    ll cnt=0;
    vector<ll>vv(x);
    for (auto &x:vv)cin>>x;
    for (int i=0;i<x;i++)
    {
        for (int j=i+1;j<x;j++)
        {
            if (is_prime(vv[i]+vv[j]))cnt++;
        }
    }
    cout<<cnt<<endl;
    // vector<ll>hash(4,0);
    // for (int i=0;i<x;i++)
    // {
    //     hash[vv[i]]++;
    // }
    // ll res=0;
    // ll pair_1_3=min(vv[3],vv[1]);
    // vv[3]-=pair_1_3;
    // vv[1]-=pair_1_3;
    // ll pair_1_2=min(vv[1],vv[2]);
    // vv[1]-=pair_1_2;
    // vv[2]-=pair_1_2;
    // ll pair_1_1=vv[1]/2;
    // cout<<pair_1_1+pair_1_2+pair_1_3<<endl;
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