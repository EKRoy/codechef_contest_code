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
    int h=n;
    vi a(n);
    rep(i,0,n-1){
        a[i]=0;
    }
    map<int,int>cnt;
    rep(i,0,n-1) cnt[a[i]]++;
    while(h--)
    {
        cout<<h<<" ";
        int s,f; cin>>s>>f;
        a[s-1]=f;
        cnt[f]++;
        cnt[0]--;
    // for(int i:a) cout<<i<<" ";
    // cout<<endl;
    int zero=h;
    int ans=0;
    int x=zero+cnt[f];
    ans+=x*(x-1)/2;
    // cout<<ans<<" ";

    }
    cout<<endl;
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}