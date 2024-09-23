// Nate 9-23-24
// secondLinkedList

/* Steps:
1. Create a new node
2. Fill node's data field(s)
3. Attach a new node to the head of the list
4. reposition pHead to the head of the list.
A.K.A take the string "Hello world" and reverse it using nodes and a for loop somehow.*/

#include <iostream>
using namespace std;

struct Node {
    string dataField;
    Node* pNext;
};

void printList (Node* pNode) {
    while (pNode != nullptr){
        cout << pNode->dataField << " ";
        pNode = pNode->pNext;
    }
}

int main () {

string myStrings[] = {"e", "l", "l", "o", " ", "w", "o", "r", "l", "d"};

Node* pHead = nullptr;
Node* pNext = nullptr;

// 
// Create a new node.
Node* pTail = new Node;
// fill the data fields
pTail->dataField = "h";
pTail->pNext = pHead = nullptr;
// position head of list
pHead = pTail;

for (int i = 0; i <= 10; i++){
// 1. Create new node
    pNext = new Node; 
// 2. Fill data fields
    pNext->dataField = myStrings[i];
// 3.Insert at head of list
    pNext->pNext = pHead;
// 4. Reposition pHead
    pHead = pNext;

}

cout << "Heres my linked list:";
printList (pHead);

// Traverse the list until a "w" is found.
// Create a pointer named pCursor.
Node* pCursor = pHead; 
// Create a while loop with a loop control variable.
string strCurrent = pCursor->dataField;
int nodeNumber = 0;
while (strCurrent.compare("w") != 0) {
    // Traverse the list
    pCursor = pCursor->pNext;
    strCurrent = pCursor->dataField;
    nodeNumber++;
}
// "w" was found at what node number.
cout << "\nThe letter 'w' was found at node number: " << nodeNumber << endl;
    
}
