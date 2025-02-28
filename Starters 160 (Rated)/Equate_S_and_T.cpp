#include<bits/stdc++.h>
using namespace std;
#define ll            long long
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
#define vlowerB(v,x)   lower_bound(v.begin(),v.end(),x)
#define vupperB(v,x)   upper_bound(v.begin(),v.end(),x)
#define F              first
#define S              second
#define rep(i,a,b)     for(int i=a;i<=b;i++)
#define rep2(i,b,a)    for(int i=b;i>=a;i--)
#define vi             vector<int>
#define zrbits(x)      __builtin_ctzll(x)
const int MOD=1e9+7;
void solve(){
    int n,m; cin>>n>>m;
    string s,t; cin>>s>>t;
    if(s==t){
        py
        return;
    }
    int cnt_1=0,cnt_2=0;
    rep(i,0,n-1) {
        if(s[i]=='a') cnt_1++;
    }
    rep(i,0,m-1) {
        if(t[i]=='a') cnt_2++;
    }
    bool ok=false;
    if(cnt_1==cnt_2 && cnt_1!=0){
        for(int j=0;j<min(n,m);j++){
            if(s[j]=='a' && t[j]=='a'){
                ok=true;
                break;
            }
            else if(s[j]=='b' && t[j]=='b'){
                continue;
            }
            else {
                break;
            }
        }
    }
    if(ok) py
    else pn
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}