//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp ' '
#define endl '\n'
using namespace std;
const ll N=1e5+9;

// struct custom_hash {
//   static uint64_t splitmix64(uint64_t x) {
//       x += 0x9e3779b97f4a7c15ULL;
//       x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9ULL;
//       x = (x ^ (x >> 27)) * 0x94d049bb133111ebULL;
//       return x ^ (x >> 31);
//   }
//
//   size_t operator()(uint64_t x) const {
//       static const uint64_t FIXED_RANDOM =
//           chrono::steady_clock::now().time_since_epoch().count();
//       return splitmix64(x + FIXED_RANDOM);
//   }
// };
#define u_int unsigned int 
const u_int max_val = (1u<<31);
bitset<max_val>present;
void solve ()
{
    int q;
   u_int s,a,b;cin>>q>>s>>a>>b;
    ll ans=0;
    for (int i=1;i<=q;i++){
        u_int x=s/2;
        if (s&1){
            if (!present[x]){
                ans+=x;
                present[x]=true;
            }
        }else{
            if (present[x]){
                ans-=x;
                present[x]=false;
            }
        }
        s=(a*s+b);
    }
    // for (auto val:rem){
    //     auto it=se.find(val);
    //     if (it!=se.end()){
    //         se.erase(it);
    //     }
    // }
    cout<<ans<<endl;
}

int main ()
{
    speed;
    solve();
    return 0;
}