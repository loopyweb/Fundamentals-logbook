//List data structure , array implementation
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class SinglyLinkedList {
    Node* head;
    int size;

public:
    SinglyLinkedList() { head = nullptr; size = 0; }

    // returns size of list
    int ListSize() {
        return size;
    }

    // returns true if list is empty
    bool IsEmpty() {
        if (size == 0) return true;
        else           return false;
    }

    // returns data at given position (1-based)
    int Get(int position) {
        Node* h = head;
        int count = 1;
        while (count < position) {
            h = h->next;
            count++;
        }
        return h->data;
    }

    // returns position of element x
    int PositionOf(int x) {
        Node* h = head;
        int count = 1;
        while (count <= size) {
            if (h->data == x)
                return count;
            h = h->next;
            count++;
        }
        return -1; // not found
    }

    // helper: insert at end
    void Insert(int val) {
        Node* newNode = new Node{val, nullptr};
        if (!head) { head = newNode; }
        else {
            Node* h = head;
            while (h->next) h = h->next;
            h->next = newNode;
        }
        size++;
    }
};

int main() {
    SinglyLinkedList list;
    list.Insert(10);
    list.Insert(20);
    list.Insert(30);

    cout << "Size: "          << list.ListSize()   << endl; // 3
    cout << "Empty: "         << list.IsEmpty()    << endl; // 0
    cout << "Get(2): "        << list.Get(2)       << endl; // 20
    cout << "PositionOf(30): "<< list.PositionOf(30)<< endl; // 3
}
