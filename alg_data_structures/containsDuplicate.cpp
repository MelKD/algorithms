#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// O(nk) solution
bool containsDuplicateOne(vector<int>&nums, int k) 
{
    int n = nums.size();

    for(int i = 0; i < n; i++) {
        int j = i-1;
        while(j >=0) {
            if(abs(j-i > k)) {
                break;
            }
            if(nums[i] == nums[j]) {
                return true;
            }
            --j;
        }
    }
    // if no dups
    return false;
}

// O(n) hash map solution
bool containsDuplicateTwo(vector<int>&nums, int k) 
{
    int n = nums.size();
    unordered.map<int, int> myMap;
    for(int i = 0; i < n; i++) {
        if(myMap.find(nums[i] !=myMap.end())) {
            if(i-myMap[nums[i]] <= k) {
                return true;
            } else {
                myMap[nums[i]] = i;
            }
        } else {
            myMap[nums[i]] = i;
        }
    }
    // if no dups closer than k from each other
    return false;    
}
