#include<bits/stdc++.h>
using namespace std;
#define int            long long
#define TC(t)          int t; cin >> t; for(int i = 1; i <= t; i++)
#define pii            pair<int,int>
#define ft             ios::sync_with_stdio(false);  cin.tie(NULL);
#define endl             "\n"
#define pb             push_back
#define py             cout<<"YES\n";
#define pn             cout<<"NO\n";
#define vrev(v)        reverse(v.begin(),v.end());
#define vsort(v)       sort(v.begin(),v.end());
#define rsort(v)       sort(v.rbegin(),v.rend());
#define F              first
#define S              second
#define rep(i,a,b)     for(int i=a;i<=b;i++)
#define rep2(i,b,a)    for(int i=b;i>=a;i--)
#define vi             vector<long long>
const int MOD=1e9+7;
void solve(){
    int n; cin>>n;
    vi a(n);
    rep(i,0,n-1) cin>>a[i];
    map<int,int>cnt;
    rep(i,0,n-1) cnt[a[i]]++;
    int zero=0;
    int l,r=0;
    for(auto [x,y]:cnt){
        if(x==0) zero=y;
        if(y>r && x!=0){
            l=x;
            r=y;
        }
    }
    int ans=0;
    for(auto [x,y]:cnt){
        if(x!=0 && x!=l){
            if(y>1){
                ans+=y*(y-1)/2;
            }
        }
    }
    int x=r+zero;
    ans+=x*(x-1)/2;
    cout<<ans<<endl;
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}