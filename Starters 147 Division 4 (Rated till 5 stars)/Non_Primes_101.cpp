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
   int tc; cin>>tc;
   while(tc--){
    int n; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
     int nm=200;
    vector<bool>prime(nm+1,true);
    for(int i=2;i*i<=nm;i++)
    {
        if(prime[i])
        {
            for(int j=i+i;j<=nm;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    vi b;
    for(int i=2;i<=nm;i++)
    {
        if(!prime[i])
        {
            b.push_back(i);
        }
    }
    // for(int val:b) cout<<val<<" ";
    bool f=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int result=a[i]+a[j];
           for(int val:b){
            if(result==val){
                cout<<i+1<<" "<<j+1<<nl;
                // cout<<result<<nl;
                f=true;
                break;
            }
            if(f) break;
           }
           if(f) break;
        }
    }
    if(f==false){
        cout<<-1<<nl;
    }
   } 
    return 0;
}