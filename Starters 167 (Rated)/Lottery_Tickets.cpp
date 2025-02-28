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
    int n; cin>>n;
    vi a(n),b(n-1);
    rep(i,0,n-1)
    {
        cin>>a[i];
        if(i!=0) b[i-1]=a[i];
    } 
    int val=a[0];
    rsort(b)
    // for(int i:b) cout<<i<<" ";
    if(val>=b[0]){
        cout<<(1000000-(val-(val-b[0])/2-1))<<endl;
    }
    else{
        vsort(b);
        // vector<bool>v(n+1,false);
        // vector<pair<int,int>>v(n);
        // for(int i=0;i<n;i++){
        //     // v[a[i]]=true;
        //         v[a[i]].F=1;
        //     cout<<<<endl;
        // }
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[a[i]]=1;
        }
        int cnt=1;
        if(b[0]<val){
            // cout<<"a";
            for(int i=b[0]+(val-b[0]+1)/2;i<val;i++){
                if(mp[i]==0) cnt++;
                // cout<<"a";
            }
        }
        if(b[n-2]>val){
            for(int i=val+(b[n-2]-val+1)/2;i<b[n-2];i++){
                if(mp[i]==0) 
                {
                    cnt++;
                    // cout<<a[i]
                }
                // cout<<"a";
            }
        }
        cout<<cnt<<endl;
    }
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}