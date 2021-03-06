#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    int n; cin >> n;
    vector<string> s(n);
    REP(i, n){
        string temp; cin >> temp;
        whole(sort, temp);
        s[i] = temp;
    }
    whole(sort, s);
    ll ans = 0, cnt = 0;
    REP(i, n){
        cnt++;
        if((i < n - 1 and s[i] != s[i + 1]) or i == n - 1){
            ans += (cnt * (cnt - 1)) / 2;
            cnt = 0;
        }
    }

    cout << ans << endl;
}