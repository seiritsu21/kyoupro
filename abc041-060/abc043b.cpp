#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;
const int MOD = 1000000007; // 計算してからmodで割る ans = (ans * a) % mod
#define int long long
template <typename T = long long > T in () { T x; cin >> x; return(x);}
// int a = in() のように使うlong long以外の型の時はstirng s = in<string>()のように型を指定する

signed main(void){
    string s = in<string>();
    vector<char> ans;
    REP(i, s.size()){
        if(s[i] == '0') ans.push_back('0');
        else if(s[i] == '1') ans.push_back('1');
        else if(s[i] == 'B' and ans.size() != 0) ans.pop_back();
    }
    REP(i, ans.size()) cout << ans[i];
    cout << endl;
}