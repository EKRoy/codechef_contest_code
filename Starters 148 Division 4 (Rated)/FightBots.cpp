#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define endl "\n"
#define pb push_back
#define F first
#define S second
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define vi vector<long long>
void solve(){
    int n,x,y; cin>>n>>x>>y;
    string s; cin>>s;
    int val_a=0;
    int x1=0,y1=0;
    map<char,int>mp;
    rep(i,0,n-1) mp[s[i]]++;
    for(int i=0;i<n;i++){
        if(s[i]=='R' || s[i]=='U') val_a++;
        else val_a--;
        if(s[i]=='R') x1++;
        if(s[i]=='L') x1--;
        if(s[i]=='U') y1++;
        if(s[i]=='D') y1--;
    }
    int val_b=x+y;
    if( abs(val_b-val_a)<=n){
        if(abs(val_b-val_a)%2== n%2){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
    else cout<<"No"<<endl;
}
int32_t main()
{
   ft;
   int tc; cin>>tc;
   while(tc--){
    solve();
   } 
    return 0;
}