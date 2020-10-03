/*
  █▀ █░█ █▀█ █▀▀ █▄█ ▄▀█ █▀ █░█   █░█░█ ▄▀█ █▀   █░█ █▀▀ █▀█ █▀▀
  ▄█ █▀█ █▀▄ ██▄ ░█░ █▀█ ▄█ █▀█   ▀▄▀▄▀ █▀█ ▄█   █▀█ ██▄ █▀▄ ██▄*//*

MMMMMMMMMMMMMMMMMMMMM.                             MMMMMMMMMMMMMMMMMMMMM
  `MMMMMMMMMMMMMMMMMMM           M\  /M           MMMMMMMMMMMMMMMMMMM'
    `MMMMMMMMMMMMMMMMMM          MMMMMM          MMMMMMMMMMMMMMMMMM'
      MMMMMMMMMMMMMMMMMM-_______MMMMMMMM_______-MMMMMMMMMMMMMMMMMM
       MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
        MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
       MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
     .MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.
    MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
                   `MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM'
                          `MMMMMMMMMMMMMMMMMM'
                              `MMMMMMMMMM'
                                 MMMMMM 
                                  MMMM
                                   MM                                       */
  #include<bits/stdc++.h>
  using namespace std;
  //increase stack size
  #pragma comment(linker, "/STACK:16777216")
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
  #define test(t) while(t--)
  #define PI  acos(-1.0)
  #define F first
  #define S second
  #define coutd(x) cout << fixed << setprecision(x)
  #define all(v) v.begin(),v.end()
  #define rall(v) v.rbegin(),v.rend()
  #define NL cout<<'\n';
  #define endl '\n'
  #define sz(x)       (int)x.size()
  #define clr(x) memset(x, 0, sizeof(x))
  #define deb(x) cout << #x << "=" << x << endl;
  #define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl;
  #define deb3(x, y, z) cout << #x << "=" << x << "," << #y << "=" << y << ","<<#z<<"="<<z<<endl;
  #define loop(a,b) for(int i=a;i<b;i++)
  #define loope(a,b) for(int i=a;i<=b;i++) 
  #define pv(v) for(auto i:v) cout<<i<<" "; cout<<endl;
  #define pv1(v) for(int i=1;i<sz(v);i++) cout<<v[i]<<" "; cout<<endl;
  #define read(v) for(int i=0;i<sz(v);i++) cin>>v[i];
  #define read1(v) for(int i=1;i<sz(v);i++) cin>>v[i];
  typedef pair<int, int>  pii;
  typedef pair<ll, ll>    pl;
  typedef vector<int>     vi;
  typedef vector<ll>      vl;
  typedef vector<pii>     vpii;
  typedef vector<pl>      vpl;
  typedef vector<vi>      vvi;
  typedef vector<vl>      vvl;
  const int64_t INF = 1e9;
  mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
  void printTime(clock_t begin)
  {
      printf("%.3lf seconds\n", (double) (clock() - begin) / CLOCKS_PER_SEC);
   
  }
  ll toint(const string &s) {stringstream ss; ss << s; ll x; ss >> x; return x;}

  string tostring ( ll number ){stringstream ss; ss<< number; return ss.str();}

  template<typename T>
  T toIntegralType(const string &str) {
      static_assert(is_integral<T>::value, "Integral type required.");
      T ret;
      stringstream ss(str);
      ss >> ret;
      if ( to_string(ret) != str)
          throw invalid_argument("Can't convert " + str);
      return ret;
  }  
  bool is_prime(int n)
  {
      if(n<2) return 0;
      for(int i=2;i*i<=n;i++) if(n%i==0)  return 0;
      return 1;
  }
  bool sortbysec(const pair<string,int> &a, 
                const pair<string,int> &b) 
  { 
      return (a.second > b.second); 
  } 
  ll fast_power(ll a,ll x)
  {
      if(x==0) return 1;
      else if(x==1) return a;
      else { ll R = fast_power(a,x>>1);
      if(!(x&1)) return R*R;
      else return R*a*R; }
  }
  ll nc2(ll n)
  {
    return n*(n-1)/2ll;
  }
 
 void solve()
{  
     int n; cin>>n; vi v(n); read(v)
     int ans=0,last=0; set<int>s;
     for(int i=0;i<n;i++)
     {
        if(s.find(v[i])==s.end())
        {
            s.insert(v[i]);
            ans=max(ans,sz(s));
        }
        else
        {
            s.clear();
            int found=-1;
            for(int j=i-1;j>=0;j--)
            {
                if(v[j]==v[i])
                {
                    found=j;
                    break;
                }
            }
            if(found!=i-1){i=found;}
        }
     }
     cout<<ans;
} 
  int32_t main()
  { 
     fio;
     // #ifndef ONLINE_JUDGE
     // freopen("input.txt","r",stdin);
     // freopen("output.txt","w",sdout);
     srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    // clock_t begin = clock();
     int t=1;   
     cin>>t; 
     test(t) 
     {
          solve(); NL
          //printTime(begin);
     }
  }      
