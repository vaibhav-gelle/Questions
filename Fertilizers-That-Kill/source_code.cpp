#include <bits/stdc++.h>

using namespace std;

int  main()
{
    int n;
    cin >> n;
    vector<int> cf(n);

    for(int i = 0; i < n; i++)
    {
        cin >> cf[i];
    }

    stack<pair<int, int>> s;
    int maxa = 0;

    for(int i = 0; i < n; i++)
    {
        if(s.empty())
        {
            s.push({cf[i], 0});
        }
        else
        {
            pair<int, int> temp = s.top();

            if(cf[i] > temp.first)
            {
                int sc = 1;
                maxa = max(maxa, sc);
                s.push({cf[i], sc});
            }
            else
            {
                pair<int, int> v = s.top();
                int pr = v.second;
                while(!s.empty() && v.first >= cf[i])
                {
                    s.pop();
                    if(s.empty())
                        break;
                    pr = max(pr, v.second);
                    v = s.top();
                }

                if(s.empty())
                {
                    s.push({cf[i], 0});
                }

                else
                {
                    s.push({cf[i], pr+1});
                    maxa = max(maxa, pr+1);
                }
            }
        }
    }
    cout << maxa << endl;
}