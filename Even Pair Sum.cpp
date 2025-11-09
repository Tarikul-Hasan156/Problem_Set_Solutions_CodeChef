//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll a,b;cin>>a>>b;
    ll even_a=0,odd_a=0,even_b=0,odd_b=0;
    if (a==1 and b==1)cout<<1<<endl;
    else{
        if (a&1){
            even_a=(a-1)/2;
            odd_a=even_a+1;
        }else{
            even_a=a/2;
            odd_a=even_a;
        }
        if (b&1){
            even_b=(b-1)/2;
            odd_b=even_b+1;
        }else{
            even_b=b/2;
            odd_b=even_b;
        }
        cout<<(odd_a*odd_b)+(even_a*even_b)<<endl;
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