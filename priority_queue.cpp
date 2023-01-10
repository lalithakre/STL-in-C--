#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(1);
    pq.push(3);
    pq.push(5);
    pq.push(8);
    cout << pq.top();
    cout << pq.empty();
    pq.pop();
    cout << pq.top();
}