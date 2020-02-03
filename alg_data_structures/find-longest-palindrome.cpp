// Find longest palindrome

#include <string>

using namespace std;

string findLongestPal(string s)
{
    string retString = "";
    for(int i = 1; i < s.length(); i++)
    {
        int count = 1;
        if(i = 1)
        {
            if (s.at(i) == s.at(i-1))
            {
                retString += s.at(i-1);
                retString += s.at(1);
            }
        } 
        else if (i%2=1) 
        {
            while (i - count == i + count)
            {   
                string tempStr = s.at(i);
                tempStr.append()
            }
        }
    }



    return retString;
}

int main() 
{

    return 0;
}
