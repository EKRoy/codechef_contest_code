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
    string s,t; cin>>s>>t;
    map<char,int>mp;
    mp['C']=1,mp['D']=2,mp['E']=3,mp['F']=4,mp['G']=5,mp['A']=6,mp['B']=7;

    int l=mp[s[0]],l1=s[1]-'0';
    int r=mp[t[0]],r1=t[1]-'0';
    if(l>r){
        ll k=(7-l)+(r-1);
        int cnt=0;
        if((4>=l && 4<=7)) cnt++;
        if((4>=1 && 4<=r)) cnt++;
        int m=r1-l1-1;
        ll ans=m*5+k-cnt;
        cout<<ans<<endl;
    }
    else{
        // cout<<"a";
        ll m=r1-l1;
        int cnt=0;
        if((3>=l && 3<=r)&& (4>=l && 4<=r)) cnt=1; 
        ll k=max(0,r-l-cnt);
        ll ans=m*5+k;
        cout<<ans<<endl;
    }
    // cout<<l<<" "<<r<<endl;
}
int32_t main()
{
   solve(); 
    return 0;
}