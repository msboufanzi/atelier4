#include <iostream>
using namespace std;

class Stack {
private:
    struct Node {
        int value;
        Node* nextNode;
    };

    Node* topNode;

public:
    Stack() : topNode(nullptr) {}

    ~Stack() {
        while (topNode != nullptr) {
            pop();
        }
    }

    void push(int val) {
        Node* newNode = new Node;
        newNode->value = val;
        newNode->nextNode = topNode;
        topNode = newNode;
        cout << "Pushed: " << val << endl;
    }

    int pop() {
        if (topNode == nullptr) {
            cout << "Error: stack is empty!" << endl;
            return -1;
        }
        int val = topNode->value;
        Node* oldTop = topNode;
        topNode = topNode->nextNode;
        delete oldTop;
        cout << "Popped: " << val << endl;
        return val;
    }

    bool isEmpty() const {
        return topNode == nullptr;
    }
};

int main() {
    Stack s1;
    Stack s2;

    s1.push(10);
    s1.push(20);
    s1.push(30);

    while (!s1.isEmpty()) {
        s1.pop();
    }

    s2.push(100);
    s2.push(200);

    while (!s2.isEmpty()) {
        s2.pop();
    }
    return 0;
}
