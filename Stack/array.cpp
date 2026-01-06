#include <bits/stdc++.h>
using namespace std;

#define MAX 50

vector<char> a;
int top = -1;

void push(auto x) {
    if (top == MAX - 1)
        cout << "Stack Overflow\n";
    else {
        a.push_back(x);
        top++;
    }
}

auto pop() {
    if (top == -1)
        return char(-1);
    auto val = a.back();
    a.pop_back();
    top--;
    return val;
}

void print() {
    if (top == -1)
        cout << "Stack is empty\n";
    else {
        for (auto i = top; i >= 0; i--) {
            cout << a[i] << " ";
            if (i == 0) break;
        }
        cout << endl;
    }
}

void checkpalindrome(auto &s) {
    a.clear();
    top = -1;

    for (auto ch : s)
        push(ch);

    for (auto ch : s) {
        if (ch != pop()) {
            cout << "Not a Palindrome\n";
            return;
        }
    }
    cout << "Palindrome\n";
}

void braceCheck(auto &s) {
    a.clear();
    top = -1;

    for (auto ch : s) {
        if (ch == '(' || ch == '{' || ch == '[')
            push(ch);
        else if (ch == ')' || ch == '}' || ch == ']') {
            char t = pop();
            if ((ch == ')' && t != '(') ||
                (ch == '}' && t != '{') ||
                (ch == ']' && t != '[')) {
                cout << "Not Balanced\n";
                return;
            }
        }
    }

    if (top == -1)
        cout << "Balanced\n";
    else
        cout << "Not Balanced\n";
}

int main() {
    push('1');
    push('2');
    push('3');
    print();

    cout << "Poped : " << pop() << endl;
    print();

    string s;
    cout << "String: ";
    cin >> s;
    checkpalindrome(s);

    cout << "Braces: ";
    cin >> s;
    braceCheck(s);

    return 0;
}
