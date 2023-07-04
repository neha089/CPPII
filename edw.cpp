#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+5;
int n,b[N],a[N],p[N],q[N];

int solve() {
    cin>>n;
    for(int i=1;i<=n;i++) {
        cin>>b[i];
        if(i==1) a[i]=1;
        else a[i]=2*a[i-1];
    }
    int sum=0;
    for(int i=1;i<=n;i++) {
        sum+=b[i]*a[i];
        if(sum>0) p[i]=p[i-1]+1, q[i]=q[i-1];
        else q[i]=q[i-1]+1, p[i]=p[i-1];
    }
    return abs(p[n]-q[n]);
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--) cout<<solve()<<'\n';
    return 0;
}
