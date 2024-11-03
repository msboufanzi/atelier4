#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int val) : value(val), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    ~LinkedList() {
        while (head != nullptr) {
            Remove();
        }
    }

    void Add(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void Remove() {
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void Display() const {
        Node* current = head;
        while (current != nullptr) {
            cout << current->value << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList a;
    a.Add(10);
    a.Add(20);
    a.Add(30);
    a.Display();

    a.Remove();
    a.Display();

    return 0;
}
