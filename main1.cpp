#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* reverse(Node* head) {
    if(head == nullptr)
        return head;

    Node* re_head = nullptr;

    while(head != nullptr)
    {
        Node* r = head -> next;
        head -> next = rhead;
        re_head = head;
        head = r;
    }

    return rhead;
}

int main() {
    return 0;
}
