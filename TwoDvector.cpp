#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>v;
    for(const auto &i:v)
    {
        for(const auto &j:i)
        {
            v[i][j].push_back(1);
        }
    }
    cout<<v[0][0];
    return 0;
}