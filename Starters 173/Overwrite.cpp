
#include <bits/stdc++.h>
using namespace std;

vector<int>ans(vector<int>& b) {
    int idx = min_element(b.begin(), b.end()) - b.begin();
    rotate(b.begin(), b.begin() + idx, b.end());
    return b;
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        vector<int>b(m);
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        
        b=ans(b);
        
        for(int i=0;i<=n-m;i++){
            
            bool poss=true;
            
            for(int j=i;j<i+m;j++){
                if(b[j-i]>a[j]){
                    poss=false;
                    break;
                }
                else if(b[j-i]==a[j]){
                    continue;
                }
                else{
                    poss=true;
                    break;
                }
            }
            
            if(poss==true){
            copy(b.begin(), b.end(), a.begin() + i);   
            }
        }
        
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
    }
}