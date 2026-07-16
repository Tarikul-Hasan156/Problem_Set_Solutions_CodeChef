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
    int n, p; cin >> n >> p;
    p--;
    cin.ignore ();
    string s; cin >> s;
    int r = 0, l = 0;
    for (int i = p; i < n; i++) {
        if (s[i] =='L'){
            r++;
        }
    }
     for (int i = p; i >= 0; i--) {
        if (s[i] =='R'){
            l++;
        }
    }
    cout << min (l, r) << endl;
}

int main ()
{
    speed;
    int t; cin >> t;
    while (t--) {
        solve ();
    }
    return 0;
}