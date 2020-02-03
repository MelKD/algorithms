#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

    // Add your code here
    
    // class constructor
    Difference(vector<int> intArray) 
    {
        elements = intArray;
    }

    // comp diff method
    int computeDifference()
    {
        
        // std::sort (myvector.begin()+4, myvector.end(), myfunction);
        
        int leng = elements.size();
        sort(elements.begin(), (elements.begin()+leng));
        maximumDifference = elements.at(leng) - elements.at(leng-1); 
       
        return maximumDifference;
    }

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}