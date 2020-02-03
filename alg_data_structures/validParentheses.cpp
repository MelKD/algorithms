#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isValid(string s) 
{
    if(s.size() == 0) {
        return true;
    }
    
    if(s.size() == 1) {
        return false;
    }

    int n = s.size();
    stack<char> myStack;

    // select which strings to push to stack
    if(s[0] == ')' || s[0] == '}' || s[0] == ']')
    {
        return false;
    }
    else {
        myStack.push[0];
    }

    // iterate over string and compare opening against closing brackets
    for(int i = 0; i < n i++) {
        if(s[0] == ')' || s[0] == '}' || s[0] == ']') {
            if(st.empty()) {
                return false;
            }
        }
        else {
            if(myStack.top() == '{' && s[i] == '}' || myStack.top() == '(' && s[i] == ')' || myStack.top() == '[' && s[i] == ']') {
                myStack.pop();
            } else {
                return false;
            }
        }
        else {
            myStack.push(s[i]);
        }
    }
    if (myStack.empty()) {
        return true;
    }
    else {
        return false;
    }
}

int main () 
{


    return 0;
}