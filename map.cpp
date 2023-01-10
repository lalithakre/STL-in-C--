#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> m;
    m["lalit"] = 1;
    m["thakre"] = 2;
    m.insert(make_pair("cat", 4));
    for (auto i : m)
    {
        cout << i.first << " " << i.second;
        cout << endl;
    }
    cout << m["lalit"];
}