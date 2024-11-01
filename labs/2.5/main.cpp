#include "list.h"


Node* createNode(long value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}

Node* insertEnd(Node* head, long value) {
    Node* newNode = createNode(value);
    if (!head) {
        return newNode;
    }
    Node* current = head;
    while (current->next) {
        current = current->next;
    }
    current->next = newNode;
    return head;
}


// "ϳ���������_1": ���������� ������� ������ (10 ��������, ��������� � �����)
Node* createList1(int count) {
    Node* head = nullptr;
    for (int i = 0; i < count; ++i) {
        long value;
        cout << "Enter value for element " << i << ": ";
        cin >> value;
        head = insertEnd(head, value);
    }
    return head;
}

// "ϳ���������_2": ���������� ������� ������ (����� > 10 � ������� ������)
Node* createList2(Node* head1) {
    Node* head2 = nullptr;
    Node* current = head1;

    while (current) {
        if (isGreater10(current->data)) {
            head2 = insertEnd(head2, current->data);
        }
        current = current->next;
    }
    return head2;
}

void printList(Node* head) {
    Node* current = head;
    while (current) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

void deleteList(Node* head) {
    while (head) {
        Node* next = head->next;
        delete head;
        head = next;
    }
}

int main() {
    // ��������� ������� ������ (10 ��������)
    Node* list1 = createList1(10);
    cout << "List 1: ";
    printList(list1);

    // ��������� ������� ������ (����� > 10 � list1)
    Node* list2 = createList2(list1);
    cout << "List 2 (numbers greater than 10 from List 1): ";
    printList(list2);

    deleteList(list1);
    deleteList(list2);

    return 0;
}