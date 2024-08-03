#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        if (this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "Memory is freed for the node with data: " << value << endl;
    }
};

void insertNode(Node*& tail, int element, int d) {
    if (tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    } else {
        Node* curr = tail;
        while (curr->data != element) {
            curr = curr->next;
        }
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node* tail, int value) {
    if (tail == NULL) {
        cout << "List is empty" << endl;
        return;
    } else {
        Node* prev = tail;
        Node* curr = prev->next;
        if (curr == prev) {
            tail = NULL;
        } else if (tail == curr) {
            tail = prev;
        }
        while (curr->data != value) {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        if (tail == curr) {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

void print(Node*& tail) {
    Node* temp = tail;
    if (tail == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    do {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

int main() {
    Node* tail = NULL;
    insertNode(tail, 5, 3);
    insertNode(tail, 3, 5);
    insertNode(tail, 5, 7);
    insertNode(tail, 7, 9);
    print(tail);
    deleteNode(tail, 7);
    print(tail);
    return 0;
}
