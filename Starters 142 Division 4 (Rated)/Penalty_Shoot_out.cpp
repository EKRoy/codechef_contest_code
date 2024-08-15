#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
int32_t main()
{
   ft;
   int t; cin>>t;
   while(t--){
    int a,b; cin>>a>>b;
    if(a>b){
        int x=a-b;
        if(x<=1) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }
    else if(b>a){
        int x=b-a;
        if(x<=2) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }
    else cout<<"YES"<<nl;
   } 
    return 0;
}