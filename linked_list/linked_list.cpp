#include <cstdio>

class Node {
public:
    int data;
    Node* next;
};

/**
 * @brief 
 * print linked list
 * @param Node* n 
 */
void printList(Node* n) {
    while (n != NULL)
    {
        printf("%d ", n->data);
        n = n->next;
    }
}

int main(int argc, char const *argv[])
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printList(head);

    delete head;
    delete second;
    delete third;

    return 0;
}
