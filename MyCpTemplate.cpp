#include<bits/stdc++.h>
using namespace std;

#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define ss(s) scanf("%s",s)
#define pi(x) printf("%d\n",x)
#define pl(x) printf("%lld\n",x)
#define ps(s) printf("%s\n",s)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int,int>  pii;
typedef pair<ll,ll>	   pll;
typedef vector<int>    vi;
typedef vector<ll>	   vl;
typedef vector<string> vs;
typedef vector<pii>	   vpii;
typedef vector<pll>	   vpll;
typedef vector<vi>	   vvi;
typedef vector<vl>	   vvl;
typedef map<int,int>   mii;
typedef map<ll,ll>     mll;
typedef map<string,int> msi;

int mpow(int base, int exp); 
const int mod = 1'000'000'007;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
}

//===============================================================//

void solve(){
    
}

int main(){

    fastIO();

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

int mpow(int base, int exp){
    base = base % mod;
    int result = 1;
    while(exp > 0){
        if(exp & 1) result = ((ll)result * base) % mod;
        base = ((ll)base * base) % mod;
        exp >>= 1;
    }
    return result;
}
