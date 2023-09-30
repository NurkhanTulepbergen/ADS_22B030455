#include <iostream>
#include <string>

using namespace std;

struct Node {
    string val;
    Node* next;
    Node* prev;

    Node(string val) {
        this->val = val;
        next = nullptr;
        prev = nullptr;
    }
};

class LinkedList {
public:
    Node* head;
    Node* tail;

    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void add_back(string s) {
        Node* node = new Node(s);
        if (head == nullptr) {
            head = node;
            tail = node;
        } else {
            tail->next = node;
            node->prev = tail;
            tail = node;
        }
    }

    void add_front(string s) {
        Node* node = new Node(s);
        if (head == nullptr) {
            head = node; 
            tail = node;
        } else {
            head->prev = node;
            node->next = head;
            head = node;
        }
    }

    void erase_front() {
        Node* front = head;
        head = head->next;
        if(head!=nullptr){
            head->prev = nullptr;
        } else{
            tail = nullptr;
        }
        delete front;
    }

    void erase_back() {
        Node* back = tail;
        tail = tail->prev;
        if(tail!=nullptr){
            tail->next = nullptr;
        } else{
            head = nullptr;
        }
        delete back;
    
    }

    bool empty() {
        return head == nullptr;
    }

    string front() {
        if(head!=nullptr){
            return head->val;
        } else{
            return "error";
        }
    }

    string back() {
        if(tail!=nullptr){
            return tail->val;
        } else{
            return "error";
        }
    }

    void clear() {
        while (!empty()) {
            erase_front();
        }
    }

};

int main() {
    LinkedList* ll = new LinkedList();
    string s;
    while (cin >> s) {
        if (s == "add_front") {
            string t;
            cin >> t;
            ll->add_front(t);
            cout << "ok" << endl;
        }
        if (s == "add_back") {
            string t;
            cin >> t;
            ll->add_back(t);
            cout << "ok" << endl;
        }
        if (s == "erase_front") {
            if (ll->empty()) {
                cout << "error" << endl;
            } else {
                cout << ll->front() << endl;
                ll->erase_front();
            }
        }
        if (s == "erase_back") {
            if (ll->empty()) {
                cout << "error" << endl;
            } else {
                cout << ll->back() << endl;
                ll->erase_back();
            }
        }
        if (s == "front") {
            cout << ll->front() << endl;
        }
        if (s == "back") {
            cout << ll->back() << endl;
        }
        if (s == "clear") {
            ll->clear();
            cout << "ok" << endl;
        }
        if (s == "exit") {
            cout << "goodbye" << endl;
            break;
        }
    }
    delete ll;
    return 0;
}