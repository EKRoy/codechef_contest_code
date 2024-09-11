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
    int a,b; cin>>a>>b;
    int ans=0;
    while(a!=b){
        if(a>b){
            if(a%2==1) ans+=a/2+1;
            else ans+=a/2;
            a/=2;

        }
        else{
            if(b%2==1) ans+=b/2+1;
            else ans+=b/2;
            b/=2;
        }
    }
    cout<<ans<<endl;
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