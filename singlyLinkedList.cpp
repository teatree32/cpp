#include <iostream>

// Node�� Ŭ���� ���ø� �����ϱ�
template <typename T>
class Node {
public:
    T data;
    Node* next;

    Node(T data) {
        this->data = data;
        this->next = nullptr;
    }
};

// singleLinkedList Ŭ���� ���� & ��� �Լ� ����
template <typename T>
class singleLinkedList {
public:
    singleLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    ~singleLinkedList() {
        Node<T>* current = head;
        Node<T>* nextNode;
        while (current != nullptr) {
            nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }

    void push(T element) {
        Node<T>* newNode = new Node<T>(element);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void show() {
        Node<T>* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data;
            if (temp->next != nullptr) {
                std::cout << " -> ";
            }
            temp = temp->next;
        }
        std::cout << " ->" << std::endl;
    }

private:
    Node<T>* head;
    Node<T>* tail;
};

int main() {
    singleLinkedList<int>* idx = new singleLinkedList<int>;
    idx->push(1);
    idx->push(2);
    idx->push(3);
    idx->push(4);
    idx->push(5);
    idx->show();
}
