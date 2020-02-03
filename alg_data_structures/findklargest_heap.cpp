// Find solution using min heap

#include <bits/stdc++.h>

using namespace std;

int findkth(vector<int>&nums, int k) {
    priority_queue< int, vector<int>, greater<int> > pq; // create min heap
    // iterate to move min value to top of heap
    for(int i = 0; i < nums.size(); i++) {
        if(pq.size() < k) {
            pq.push(nums[i]);
        } else {
            int minVal = pq.top();
            if(minVal < nums[i]) {
                pq.pop();
                pq.push(nums[i]);
            }
        }
    }
    // return min value from top of heap
    return pq.top(); 
}

int main() {

    priority_queue< int, vector<int>, greater<int> > pq; // create min heap

    return 0;
}