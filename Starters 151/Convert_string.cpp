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
#define F              first
#define S              second
#define rep(i,a,b)     for(int i=a;i<=b;i++)
#define rep2(i,b,a)    for(int i=b;i>=a;i--)
#define vi             vector<long long>
const int MOD=1e9+7;
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int zero=count(s.begin(),s.end(),'0');
    int one=count(s.begin(),s.end(),'1');
    if((zero==0 && one!=0) || (zero!=0 && one==0)){
        if(n%2==0){
            cout<<n/2<<endl;
        }
        else cout<<n/2+1<<endl;
    }
    else{
        if(zero==one){
            cout<<zero/2+1<<endl;
        }
        else{
            cout<<n-min(zero,one)+1<<endl;
        }
    }
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}