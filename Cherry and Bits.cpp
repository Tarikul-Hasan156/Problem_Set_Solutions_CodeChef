//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp ' '
#define endl '\n'
using namespace std;
const ll N=1e3+9;

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
int vv[N][N],pre[N][N];
void solve ()
{
    int n,m;cin>>n>>m;
    string s="";
    for (int i=1;i<=n;i++){
        string temp;cin>>temp;s+=temp;
    }
    ll k=0;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            ((s[k++]=='0')?vv[i][j]=0:vv[i][j]=1);
        }
    }
    int q;cin>>q;
    while (q--){
        int x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
        pre[x1][y1]++;
        pre[x1][y2+1]--;
        pre[x2+1][y1]--;
        pre[x2+1][y2+1]++;
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            pre[i][j]=pre[i-1][j]+pre[i][j-1]+pre[i-1][j-1]+pre[i][j];
        }
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            if (pre[i][j]&1){
                vv[i][j]^=1;
            }
            cout<<vv[i][j];
        }
        cout<<endl;
    }
    
}

int main ()
{
    speed;
    solve();
    return 0;
}