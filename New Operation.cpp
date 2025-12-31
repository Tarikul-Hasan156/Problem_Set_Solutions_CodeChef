    //بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
    #include <bits/stdc++.h>
    #define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #define ll int64_t
    #define sp ' '
    #define endl '\n'
    using namespace std;
    // const ll N=1e5+9;

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
    const ll N=27;
    vector<ll>vv(N);
    void solve ()  
    {
        int x;cin>>x;
        for (int i=1;i<=x;i++)cin>>vv[i];
        auto v=vv;
        ll mx=0,pw=2;
        for (int i=2;i<=x;i++){
            mx+=pw*(vv[i]);
            pw*=2;
        }
        // for (int i=x-1;i>=1;i--){
        //     vv[i]=vv[i]+vv[i+1]*2;
        // }
        // for (int i=2;i<=x;i++){
        //     v[i]=v[i]*2+v[i-1];
        // }
        ll mn=0;
        for (int i=2;i<=x;i++)mn+=vv[i];
        cout<<vv[1]+(2*mn)<<sp;
        cout<<mx+vv[1]<<endl;
        // cout<<*max_element(vv.begin(),vv.end())<<endl;
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