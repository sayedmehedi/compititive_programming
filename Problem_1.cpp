#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long long int lli;
typedef vector<ll> vl;
typedef vector<int> vi;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define SQR(x) ((x) * (x))

#define loop(i, y) for (int i = 0; i < int(y); i++)
#define FOR(i, x, y) for (int i = int(x); i <= int(y); i++)
#define ROF(i, y, x) for (int i = int(y); i >= int(x); i--)

#define ALL(c) c.begin(), c.end()
#define CLR(x, y) memset(x, y, sizeof(x))

#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)

#define si(x) scanf("%d", &x)
#define sii(x, y) scanf("%d %d", &x, &y)
#define siii(x, y, z) scanf("%d %d %d", &x, &y, &z)
#define sl(x) scanf("%lld", &x)
#define sll(x, y) scanf("%lld %lld", &x, &y)
#define slll(x, y, z) scanf("%lld %lld %lld", &x, &y, &z)
#define sllll(a, b, c, d) scanf("%lld %lld %lld %lld", &a, &b, &c, &d)

#define FileIO                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FastIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);

#define FixedPrecision(x)        \
    ios::sync_with_stdio(false); \
    cout.setf(ios::fixed);       \
    cout.precision(x);           \
    cin.tie(0);
#define bitCheck(N, in) ((bool)(N & (1LL << (in))))
#define bitOff(N, in) (N & (~(1LL << (in))))
#define bitOn(N, in) (N | (1LL << (in)))
#define bitFlip(a, k) (a ^ (1LL << (k)))

#define start_time clock_t tStart = clock();
#define execution_time printf("\n>>Time taken: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);

#define popCount(x) __builtin_popcount(x)
#define int2Bin(x, y) \
    ;                 \
    bitset<y> z = x;  \
    cout << z.to_string() << endl;
#define tr(it, container) for (auto it = container.begin(); it != container.end(); it++)
#define unq(v) (v).erase(unique(ALL(v)), v.end())
#define common(a, b) sort(ALL(a)), sort(ALL(b)), a.erase(set_intersection(ALL(a), ALL(b), a.begin()), a.end())
#define uncommon(a, b) sort(ALL(a)), sort(ALL(b)), a.erase(set_symmetric_difference(ALL(a), ALL(b), a.begin()), a.end())

#define TE(t, n) cout << "Case " << t << ": " << n << endl;

#ifndef ONLINE_JUDGE
#define debug(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
    cout << name << " = " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names, ',');
    cout.write(names, comma - names) << " = " << arg1 << " | ";
    __f(comma + 1, args...);
}
#else
#define debug(...)
#endif

/// Constants

#define MAXN 1000005
#define MAX 200005
#define MOD 1000000007
#define BASE 1000000009
#define eps 1e-9
#define INF 1llu << 61 // 2,305,843,009,213,693,952
#define inf 1 << 29    // 536,870,912
#define PI acos(-1.0)  // 3.1415926535897932
#define E 2.71828182845904523536

bool isPowerOfTwo (int x)
{
    /* First x in the below expression is for the case when x is 0 */
    return x && (!(x&(x-1)));
}


bool isVowel(char c)
{
    return ( (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') || (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')) ;
}


// prime check
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}


long long SUM_OF_AP(long long a, long long n, long long d)
{
    return (n/2.0)*(2*a+(n-1)*d);
}

bool custom_compare(const pair<int,char> &a, const pair<int,char> &b)
{
    if( a.ss == b.ss )
        return a.ff < b.ff;
    return a.ss < b.ss;
}




/*------------------------------------ * My Functions * -----------------------------------------*/







int main()
{



ll T = 1; //sl(T);

for(int t=1 ; t <= T ; t++)
{
    ll n; sl(n);
    vl v(n);
    for(int i=0 ; i<n ; i++)
        sl(v[i]);
    vl av(n);
    vl AV(n);
    for(int i = 0 ; i < n ; i ++){
        av[i] = v[n-1]-v[i];
        AV[i] = v[n-1]-v[i];
    }
    sort(ALL(av));
    reverse(ALL(AV));

    int f = 0 ;
    for(int i = 0; i < n; i++)
    {
        if(av[i] != AV[i]){ f=1;break;}
    }

    if(f==1)
        printf("No\n");
    else
        printf("Yes\n");

}



        return 0;
}
