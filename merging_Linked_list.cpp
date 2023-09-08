#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};

int main() {
  
    Node* list1 = new Node{1, NULL};
    list1->next = new Node{3, NULL};
    list1->next->next = new Node{5, NULL};

    Node* list2 = new Node{2, NULL};
    list2->next = new Node{4, NULL};
    list2->next->next = new Node{6, NULL};


    Node* current = list1;
    while (current->next) {
        current = current->next;
    }
    current->next = list2;

 
    current = list1;
    while (current) {
        cout << current->data << " ";
        current = current->next;
    }


    return 0;
}

