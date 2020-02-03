#include <iostream>
#include <vector>

using namespace std;

vector<int> decompressRLElist(vector<int> &nums)
{
  vector<int> returnVec;
  vector<pair<int, int> > foundPairs;
  // capture each set of pairs from nums
  for (int i = 0; i < nums.size(); i = i + 2)
  {
    int a = nums.at(i);
    int b = nums.at(i + 1);
    pair<int, int> nextP;
    nextP.first = a;  // frequency
    nextP.second = b; // value
    foundPairs.push_back(nextP);
    for (int i = 0; i < nextP.first; i++)
    {
      returnVec.push_back(nextP.second);
    }
  }

  return returnVec;
}

int main()
{
  vector<int> nums;
  for (int i = 1; i < 5; i++)
  {
    nums.push_back(i);
  }

  vector<int> temp = decompressRLElist(nums);

  cout << "[";
  for (int i = 0; i < temp.size(); i++)
  {
    cout << temp.at(i) << ", ";
  }
  cout << "]" << endl;

  return 0;
}