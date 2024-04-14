#include<iostream>
using namespace std;

#include <iostream>
using namespace std;

class A {
    int a;
public:
    int* ptr;
    A() {
        cout << "Constructor called" << endl;
    }
    ~A() {
        cout << "Destructor called" << endl;
    }
};

class node {
public:
    int value;
    node* next;
};

int main() {
    A* a = new A;
    cout << "object of class A created using new" << endl;

    A* b = (A*)malloc(sizeof(A));
    cout << "object of class A created using malloc" << endl;

    node* head;
    node* one = nullptr;
    node* two = nullptr;
    node* three = nullptr;

    one = new node();
    two = new node();
    three= new node();
    



    // Assign value values
    one->value = 1;
    two->value = 2;
    three->value = 3;

    // Connect nodes
    one->next = two;
    two->next = three;
    three->next = nullptr;

    // Print the linked list values
    head = one;
    while (head != nullptr) {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;

    // Clean-up
    delete a;
    delete one;
    delete two;
    delete three;

    return 0;
}






