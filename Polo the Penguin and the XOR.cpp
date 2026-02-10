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
int a[N],pre[N];
int cnt[30][2];
void solve ()
{
    int n;cin>>n;
    for (int i=1;i<=n;i++)cin>>a[i];
    for (int i=1;i<=n;i++){
        pre[i]=pre[i-1]^a[i];
    }
    ll ans=0;
    for (int i=0;i<30;i++){
        cnt[i][0]++;
    }
    for (int i=1;i<=n;i++){
        for (int k=0;k<30;k++){
            if (pre[i]>>k&1){
                ans+=1LL*cnt[k][0]*(1<<k);
            }else{
                ans+=1LL*cnt[k][1]*(1<<k);
            }
        }
        for (int k=0;k<30;k++){
            if (pre[i]>>k&1){
                cnt[k][1]++;
            }else cnt[k][0]++;
        }
    }
    for (int k=0;k<30;k++){
            // if (pre[i]>>k&1){
                cnt[k][1]=0;
            // }else 
            cnt[k][0]=0;
        }
    cout<<ans<<endl;
}

int main ()
{
    speed;
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}