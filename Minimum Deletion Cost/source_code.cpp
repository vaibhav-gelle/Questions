#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;

    int n=s.length();

    int cost[n];

    for(int i=0;i<n;i++){
        cin>>cost[i];
    }

    int res = 0, max_cost = 0, sum_cost = 0;

    for (int i = 0; i < n; ++i) {
        if (i > 0 && s[i] != s[i - 1]) {
            res += sum_cost - max_cost;
            sum_cost = max_cost = 0;
        }
        sum_cost += cost[i];
        max_cost = max(max_cost, cost[i]);
    }
    res += sum_cost - max_cost;


    cout<<res<<"\n";

}