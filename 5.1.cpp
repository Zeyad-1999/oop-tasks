#include <bits/stdc++.h>
#define Z0ZZ                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define el '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
using namespace std;
typedef long long ll;
const double PI = acos(-1.0);
const ll Mod = 1e9 + 7;
ll gcd(ll x, ll y)
{
    return (!y) ? x : gcd(y, x % y);
}

ll lcm(ll x, ll y)
{
    return ((x / gcd(x, y)) * y);
}

ll fact(ll a)
{
    return (a == 1 ? 1 : fact(a - 1) * a);
}

ll fast(ll x, ll y)
{
    x %= Mod;
    if (y == 1)
        return x;

    else if (y % 2 == 0)
        return (fast((x * x) % Mod, y / 2)) % Mod;
    else
        return (fast(x % Mod, y - 1) * x) % Mod;
}

ll prime(int x)
{
    bool ok = 0;
    for (ll b = 2; b * b <= x; b++)
    {
        if (x % b == 0)
            return 0;
    }
    if (ok == 0 && x > 1)
        return 1;
    if (x == 1 || x == 0)
        return 0;
}

void file()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
ll cnt=0;
class intializer{
private:
char c;
public:
 intializer(char c):c(c){
     cnt++;
     cout<<c<<"   "<<cnt<<el;
}
 ~intializer(){
     cout<<c<<"   "<<cnt<<el;
     cnt--;

}
};
int main()
{
    /*-->{((*/ Z0ZZ /*))}<--*/
intializer k('k'),l('l'),m('m');
    return 0;
}
