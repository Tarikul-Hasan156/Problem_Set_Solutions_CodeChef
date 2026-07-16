//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define sp ' '
#define endl '\n'
using namespace std;
const ll N=1e5+9;

void solve ()
{
    int n; cin >> n;
    cin.ignore();
    string s; cin >> s;
    string ans = "";
    int st = -1, en = -1;
    bool ok = true, check = false;
    for (int i =0; i < n; i++) {
        if (s[i]=='z'){
           if (ok) {
             st = i;
             ok = false;
           }
            en = i;
           check = true;
        }else {
            if (check) {
                break;
            }
        }
    }
    if (st >= 0 and en >= 0) {
            for (int i = st; i <= en; i++) {
            s[i] = 'a';
        }
    }
   
    cout << s << endl;
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