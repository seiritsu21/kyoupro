#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    string s; cin >> s;
    int numS = stoi(s);
    int save = numS;
    int a = 0;
    REP(i, s.size() + 1){
        a += numS % 10;
        numS /= 10;
    }
    if(save % a == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

}