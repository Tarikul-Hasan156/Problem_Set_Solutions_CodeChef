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
const int VAL=4e3+5;
bitset<VAL>pre_a[N],pre_b[N];
int a[N],b[N];
void solve ()
{
    int n,m,q;cin>>n>>m>>q;
    for (int i=1;i<=n;i++)cin>>a[i];
    for (int i=1;i<=m;i++)cin>>b[i];
    pre_a[0].reset();
    pre_b[0].reset();
    for (int i=1;i<=n;i++){
        pre_a[i]=pre_a[i-1];
        pre_a[i].flip(a[i]);
    }
    for (int i=1;i<=m;i++){
        pre_b[i]=pre_b[i-1];
        pre_b[i].flip(b[i]);
    }
    while (q--){
        int l1,r1,l2,r2;cin>>l1>>r1>>l2>>r2;
        auto first=pre_a[r1]^pre_a[l1-1];
        auto second=pre_b[r2]^pre_b[l2-1];
        auto last=first^second;
        cout<<last.count()<<endl;
    }
}

int main ()
{
    speed;
    solve();
    return 0;
}