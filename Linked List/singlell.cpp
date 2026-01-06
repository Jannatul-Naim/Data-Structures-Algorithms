#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int n) : data(n), next(nullptr) {}
    Node(int n, Node* nxt) : data(n), next(nxt) {}
};

Node* head = nullptr;

void insertFirst(int x) {
    Node* n = new Node(x, head);
    head = n;
}

void insertLast(int x) {
    Node* n = new Node(x);
    if (!head) {
        head = n;
        return;
    }
    Node* t = head;
    while (t->next)
        t = t->next;
    t->next = n;
}

void deleteFirst() {
    if (!head)
        return;
    Node* t = head;
    head = head->next;
    delete t;
}

void deleteLast() {
    if (!head)
        return;
    if (!head->next) {
        delete head;
        head = nullptr;
        return;
    }
    Node* t = head;
    while (t->next->next)
        t = t->next;
    delete t->next;
    t->next = nullptr;
}

void replace(int oldVal, int newVal) {
    Node* t = head;
    while (t) {
        if (t->data == oldVal) {
            t->data = newVal;
            return;
        }
        t = t->next;
    }
}

void display() {
    Node* t = head;
    while (t) {
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}

int main() {
    insertFirst(10);
    insertLast(20);
    insertLast(30);
    display();

    deleteFirst();
    display();

    deleteLast();
    display();

    insertFirst(40);
    insertLast(50);
    display();

    replace(40, 100);
    display();

    return 0;
}
