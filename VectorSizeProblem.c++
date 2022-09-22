#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    // Vector created their size double when their capacity = size
    for (int i = 0; i < 33; i++)
    {
        v.push_back(i);
        cout << "size" << v.size() << " "
             << "Capacity:" << v.capacity() << endl;
        /*
        size1 Capacity:1
        size2 Capacity:2
        size3 Capacity:4
        size4 Capacity:4
        size5 Capacity:8
        size6 Capacity:8
        size7 Capacity:8
        size8 Capacity:8
        size9 Capacity:16
        */
    }
}