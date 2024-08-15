#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define F first
#define S second
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define vi vector<long long>
int32_t main()
{
   ft;
   int t; cin>>t;
   while(t--){
    int a,b; cin>>a>>b;
    if(b>a) cout<<-1<<nl;
    else{
        cout<<b*2+1<<nl;
    }
   } 
    return 0;
}