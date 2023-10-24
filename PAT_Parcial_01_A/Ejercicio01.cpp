#include "Ejercicio01.h"

Node<char>* Ejercicio01::remove(Node<char>* head, char value)
{
    if (head == nullptr) {
        return nullptr;
    }

    while (head != nullptr && head->value == value) {
        Node<char>* temp = head;
        head = head->next;
        delete temp;
    }

    Node<char>* current = head;
    while (current != nullptr && current->next != nullptr) {
        if (current->next->value == value) {
            Node<char>* temp = current->next;
            current->next = temp->next;
            delete temp;
        }
        else {
            current = current->next;
        }
    }

    return head;
}
