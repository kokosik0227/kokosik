#include <iostream>

using namespace std;

struct Node {
    long data;
    Node* next;
};

// Inline-функція для перевірки, чи число більше 10
inline bool isGreater10(long num) {
    return num > 10;
}

Node* createNode(long value);
Node* insertEnd(Node* head, long value);
Node* createList1(int count);
Node* createList2(Node* head1);
void printList(Node* head);
void deleteList(Node* head);