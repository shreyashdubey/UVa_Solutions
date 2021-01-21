  #include<bits/stdc++.h>
  #include<ext/pb_ds/assoc_container.hpp>
  #include<ext/pb_ds/tree_policy.hpp>
  using namespace std;
  using namespace __gnu_pbds;
  typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> PBDS;
  #define M1 1000000007
  #define M2 998244353
  #define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  #define ll long long int
  #define ull unsigned long long int
  #define eb emplace_back
  #define mkp make_pair
  #define setbits(x)          __builtin_popcount(x)
  #define zrobits(x)          __builtin_ctzll(x)
  #define lftbit(x)           x ? 64 - __builtin_clzll(x) : -inf;
  #define PI  acos(-1.0)
  #define F first
  #define S second
  #define coutd(x) cout << fixed << setprecision(x)
  #define all(v) v.begin(),v.end()
  #define rall(v) v.rbegin(),v.rend()
  #define endl '\n'
  #define sz(x)  (int)x.size()
  #define deb(x) cout << #x << "=" << x << endl;
  #define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl;
  #define deb3(x, y, z) cout << #x << "=" << x << "," << #y << "=" << y << ","<<#z<<"="<<z<<endl;
  #define pv(v) for(auto i:v) cout<<i<<" "; cout<<endl;
  #define pv1(v) for(int i=1;i<sz(v);i++) cout<<v[i]<<" "; cout<<endl;
  #define read(v) for(int i=0;i<sz(v);i++) cin>>v[i];
  #define read1(v) for(int i=1;i<sz(v);i++) cin>>v[i];
  typedef pair<int, int>  pii;
  typedef vector<int>     vi;
  typedef vector<ll>      vl;
  typedef vector<pii>     vpii;
  ll toint(const string &s) {stringstream ss; ss << s; ll x; ss >> x; return x;}
  string tostring ( ll number ){stringstream ss; ss<< number; return ss.str();}
  bool is_prime(int n)
  {
      if(n<2) return 0;
      for(int i=2;i*i<=n;i++) if(n%i==0)  return 0;
      return 1;
  }
   bool sortbysec(const pair<int,int> &a, 
                const pair<int,int> &b) 
  { 
      return (a.S > b.S); 
  }
  bool sortbyfirst(const pair<ll,ll> &a, 
                const pair<ll,ll> &b) 
  { 
      return (a.F > b.F); 
  }
  ll power(ll a, ll n, ll md){if(n==0){return 1;}else{int res=power(a,n/2,md);res=(res*res)%md;if(n%2!=0){res=(res*a)%md;}return res;}} 
  ll fast_power(ll a,ll x)
  {
      if(x==0) return 1;
      else if(x==1) return a;
      else { ll R = fast_power(a,x>>1);
      if(!(x&1)) return R*R;
      else return R*a*R; }
  }
  ll nc2(ll n){ return n*(n-1)/2ll; } 
void solve()
{
    int t; cin>>t;
    for(int c=1;c<=t;c++)
    {
      int n; cin>>n; map<string,int>mp; set<string>z;
      for(int i=0;i<n;i++)
      {
          string s; int x; cin>>s>>x;
          z.insert(s);
          mp[s]=x;
      }
      int d; cin>>d;
      string q; cin>>q; 
      if(z.find(q)==z.end()) cout<<"Case "<<c<<": Do your own homework!";
      else if(mp[q]<=d)cout<<"Case "<<c<<": Yesss";
      else if(mp[q]<=d+5)cout<<"Case "<<c<<": Late";
      else cout<<"Case "<<c<<": Do your own homework!";
      if(c<=t)cout<<endl;
    }
}
  int32_t main()
  { 
     fio;
      //#ifndef ONLINE_JUDGE
      //freopen("input.txt","r",stdin);
      //freopen("output.txt","w",stdout);
     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    // clock_t begin = clock();
     int t=1;
     //cin>>t; 
     while(t--) 
     {
          solve(); //cout<<endl;
          //printTime(begin);
     }
  }  
