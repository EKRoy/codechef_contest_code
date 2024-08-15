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
    vector<int>v(3);
    for(int i=0;i<3;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int val=v[0]+v[1];
    if(val+1>=v[2])
    {
        cout<<"YES"<<nl;
    }
    else cout<<"NO"<<nl;
   } 
    return 0;
}