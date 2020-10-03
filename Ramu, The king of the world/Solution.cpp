#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int n,ans=1,k;
    cin>>n;
    ll int i;
    map<ll int,int>m;
    while(n--){
        cin>>k;
        int kk=k;
        for(i=2;i*i<=kk;i++){
            if(k%i==0)m[i]++;
            while(k%i==0)k/=i;
        }
        if(k>1)m[k]++;
    }
    map<ll int,int>::iterator it;
    
    for(it=m.begin();it!=m.end();it++){
        ans=max(ans,it->second);
    }
    
    cout<<ans;
    
}