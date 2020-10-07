#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        
        vector <pair<int,int>> v;
        
        for(int i=0;i<n;i++){
            v.push_back(make_pair(efficiency[i],speed[i]));
        }
        
        sort(v.rbegin(),v.rend());  //sort engineers in descending order of efficiency
        
        priority_queue <int, vector<int>, greater<int> > pq;  //priority queue which resembles min heap. So pq is basically min heap.
        

            long sum=0,res=0;
            for(int i=0;i<n;i++){
                 pq.push(v[i].second);
                 sum += v[i].second;

                 if (pq.size() > k) {          //if size of pq>k remove smallest speed value
                    sum -= pq.top();
                    pq.pop();
                }
                res = max(res, sum *(v[i].first));  //min efficiency of group is efficiency of new member
            }

            return res%(int)(1e9+7);
    
}

int main(){
    FIO;
    int n,k;
    cin>>n;

    vector <int> speed(n);
    vector <int> efficiency(n);

    for(int i=0;i<n;i++)
        cin>>speed[i];
    for(int i=0;i<n;i++)
        cin>>efficiency[i];

    cin>>k;    
    

    cout<<maxPerformance(n,speed,efficiency,k)<<"\n";

}