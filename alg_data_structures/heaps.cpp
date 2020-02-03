#include <bits/stdc++.h>

using namespace std;

int main() {

    priority_queue<int> pq; // create max heap
    priority_queue< int, vector<int>, greater<int> > pq; // create min heap

    pq.push(5);  // pushes 5 to heap
    pq.empty();
    pq.top();
    pq.pop();

    return 0;
}