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
    int n,k; cin>>n>>k;
    vi a(n);
    map<int,int>mp;
    rep(i,0,n-1) cin>>a[i],mp[a[i]]++;
    // for(auto [x,y]:mp){
    //     cout<<x<<" "<<y<<endl;
    // }
    if(mp.size()==1){
         for(auto [x,y]:mp){
            if(x==k){
                cout<<0<<endl;
            }
            else cout<<1<<endl;
       }
       return;
    }
    map<int,int>mp2;
    rep(i,0,n-1){
        mp2[__gcd(a[i],k)]++;
    }
   
    if(mp2.size()==1){
        for(auto [x,y]:mp2){
            if(x==k){
                cout<<1<<endl;
                return;
            }
            // else cout<<2<<endl;
       }
    }
    map<int,int>mp3;
    rep(i,0,n-1){
        mp3[a[i]]++;
    }
    if(mp3.size()==2){
        int cnt=0;
        bool f=false;
        bool ff=true;
        for(auto [x,y]:mp3){
            if(x==k) f=true;
            else{
                for(int i=0;i<n;i++){
                    if(a[i]==x){
                        cnt++;
                        // cout<<i<<endl;
                        if(cnt==y) break;
                    }
                    else {
                        if(i!=n-1){
                            cnt=0;
                        }
                    }
                }
                if(y!=cnt) ff=false;
            }
        }
        if(f && ff){
            cout<<1<<endl;
            return;
        }
    }
    cout<<2<<endl;
    // for(auto it:st){
    //     cout<<it<<endl;
    // }
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}