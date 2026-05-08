//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define sp ' '
#define endl '\n'
using namespace std;
const int N=1e7+9;

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
// int GCD (int a, int b){
//     if (a>b)swap(a,b);
//     if (a==0)return b;
//     return GCD(b%a,a);
// }
int spf[N];
void S (){
    for (int i=2;i<N;i++)spf[i]=i;
    for (int i=2;i<N;i++){
        for (int j=i;j<N;j+=i){
            spf[j]=min(spf[j],i);
        }
    }   
}
void solve ()
{
    ll a,b;cin>>a>>b;
    // if (b==1){
    //     cout<<"no"<<endl;return;
    // }
    ll g=__gcd(a,b);
    while (g!=1){
        b/=g;
        g=__gcd(a,b);
    }
    if (b==1){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    // vector<int>v;
    //     while (b>1){
    //         v.push_back(spf[b]);
    //         b/=spf[b];
    //      }
    // for (int i=0;i<v.size();i++){
    //     if (a%v[i]!=0){
    //         cout<<"no"<<endl;return;
    //     }
    // }
    // cout<<"yes"<<endl;
    
}

int main ()
{
    speed;
    // S();
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}