#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.back() << endl;
    cout << q.front();
    q.pop();
    q.pop();
}