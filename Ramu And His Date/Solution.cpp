#include <bits/stdc++.h>

using namespace std;



int main() {
    
    int n,m;
    cin>>n>>m;
    int a[m],i,j,ans=-1;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[j];
        }
        ans=max(ans,*min_element(a,a+m)); // selecting maximum element from the minimum elements of array.
    }
    cout<<ans;
}