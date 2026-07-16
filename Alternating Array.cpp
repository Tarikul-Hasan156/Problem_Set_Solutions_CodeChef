#include <bits/stdc++.h>
using namespace std;
void solve (){
    int n; cin >> n;
    int a[n+1];
    int odd = 0, even = 0;
    int ans_odd = 0, ans_even =0;
    int j = 2;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if ((i & 1 ) and a[i]%2==0) {
             ans_odd++;
        }
        if (i%2==0 and (a[i] & 1)) {
            ans_odd++;
        }
         if ((j % 2==0 ) and (a[i]&1)) {
             ans_even++;
        }
        if (j%2==1 and (a[i] % 2 == 0)) {
            ans_even++;
        }
        j++;
    }
    cout << min(ans_even, ans_odd) << endl;
    
}
int main() {
	int t; cin >> t;
	 while (t--) {
	     solve ();
	 }

}
