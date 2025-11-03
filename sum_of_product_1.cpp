//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll x;cin>>x;
    vector<ll>vv(x);
    ll zero_cnt=0;
    for (int i=0;i<x;i++){
        cin>>vv[i];
        if (vv[i]==0){
            zero_cnt++;
        }
    }
    if (zero_cnt==0){
        cout<<x*(x+1)/2<<endl;return;
    }
    vector<ll>temp;
    ll cnt=0;
    for (int i=0;i<x-1;i++){
        if (vv[i]==vv[i+1] and vv[i]==1){
            cnt++;
        }else{
            if (vv[i]==1){
                cnt++;
                temp.push_back(cnt);
                cnt=0;
            }
            
        }
    }
    // for (auto &x:temp)cout<<x<<sp;cout<<endl;
    // cout<<cnt<<endl;
    if (cnt==0 and vv[x-1]==1){
        temp.push_back(1);
    }
    if (cnt>0){
        cnt++;
        temp.push_back(cnt);
    }
    // for (auto &x:temp)cout<<x<<sp;cout<<endl;
    ll res=0;
    for (auto val:temp){
        res+=val*(val+1)/2;
    }
    cout<<res<<endl;
    
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