#include <bits/stdc++.h>
using namespace std;

class Stack {
public:
    struct Node {
        int data;
        Node* next;
        Node(int x) : data(x), next(nullptr) {}
    };

    Node* top;

public:
    Stack() {
        top = nullptr;
    }
    
    Stack(int n){
        Node* fn = new Node(n);
        top = fn;
    }

    void push(int x) {
        Node* n = new Node(x);
        n->next = top;
        top = n;
    }

    void pop() {
        if (!top) {
            cout << "Stack Underflow\n";
            return;
        }
        Node* t = top;
        cout << "Popped element: " << top->data << endl;
        top = top->next;
        delete t;
    }

    void display() {
        if (!top) {
            cout << "Stack is empty\n";
            return;
        }
        Node* t = top;
        while (t) {
            cout << t->data << " ";
            t = t->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    s.pop();
    s.display();

    s.pop();
    s.pop();
    s.pop();
    s.display();

    return 0;
}
