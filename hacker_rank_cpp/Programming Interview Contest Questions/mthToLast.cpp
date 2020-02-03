#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// include struct for nodes to create linked list
struct node
{
	std::string data;
	node *next;	
};


node createLinkedList(node *head, int n) {
    node *temp = new node;
    node *tail = new node;
    temp->data = n;
    temp->next = NULL;
    
    
    if (head == NULL) {
        head = new node();

        head->data = n;
        head->next = NULL;

        return *head;
    }
    else {
        temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        // node* tail = new node();

        tail->data = n;
        tail->next = NULL;
        (temp->next) = tail;

        return *head;
    }
    
}

int countNodes(node *head) {
    int count = 0;
    node *leng = head;
    while (leng !=NULL) {
        count++;
        leng = leng->next;
    }
    
    return count;
}

string getItem(node *head, int position)
{

    node* searchList = head;  // Start from head and increment
    int count = 0;

    if (position == 1) {
        count = count+1;
        cout << head->data << " ";
        return head->data;
    } 
    while (searchList !=NULL) {
        searchList = searchList->next;
        count++;
            if ( count+1 == position ) {
                cout << searchList->data << " ";
                return searchList->data;
            }
    }
    if (position < count ) {
        cout << "NIL" << endl;
        return "NIL";
    }

    return "done";
}

// PARTIAL SOLUTION
// this only passes some test cases, won't pass large value in C++ without more time than would 
// be likely to have in a coding challenge


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string mIn;
    string lIn;
    node *head = new node;
    
    // get values to use from stdin
    std::getline(std::cin, mIn);
    std::getline(std::cin, lIn);

    // strip whitespace from lIn
    lIn.erase(std::remove(lIn.begin(), lIn.end(), ' '), lIn.end() );
    
    // create linked list
    int leng = lIn.size();
    for (int i = 0; i < leng; i++) {
        createLinkedList(head, lIn.at(i));
    }
    
    // count nodes in linked list
    int totalNodes = countNodes(head);
    
    // use above to get mth position and return value of node at that position
    int mNum = std::stoi(mIn);
    int nodePos = totalNodes-mNum;
    
    // cout << nodePos << endl;
    
    getItem(head, nodePos);
    
    return 0;
}