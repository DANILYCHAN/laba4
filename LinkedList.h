#ifndef LAB4_LINKEDLIST_H
#define LAB4_LINKEDLIST_H

template<class T>
class LinkedList {
private:
    template<typename Type>
    class Node {
    public:
        Type data;
        Node<Type> *next;

        explicit Node(Type data, Node *next = nullptr) {
            this->data = data;
            this->next = next;
        }
    };

    int size = 0;
    Node<T> *head;

public:

    LinkedList() {
        this->size = 0;
        this->head = nullptr;
    }

    LinkedList(T *items, int count) {
        this->head = new Node<T>(items[0]);
        Node<T> *current = this->head;

        for (int i = 1; i < count; i++) {
            current->next = new Node<T>(items[i]);
            current = current->next;
        }
        this->size = count;
    }

    LinkedList(LinkedList<T> &list) {
        for (int i=0; i<list.GetSize(); i++) {
            this->Append(list.Get(i));
        }
    }

    T &Get(int index) {
        int counter = 0;
        Node<T> *current = this->head;

        while(current != nullptr){
            if (counter == index ){
                return current->data;
            }
            current = current->next;
            counter++;
        }
    }

    int GetSize() { return this->size; }

    void Append(T item) {
        if (head == nullptr) {
            head = new Node<T>(item);
        } else {
            Node<T> *current = this->head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = new Node<T>(item);
        }
        this->size++;
    }

    void Prepend(T item) {
        this->head = new Node<T>(item, this->head);
        this->size++;
    }

    void Set(T item, int index) {
        if (index == 0){
            Prepend(item);
        } else {
            Node<T> *previous = this->head;
            for(int i = 0; i < index - 1 ;i++ ){
                previous = previous->next;
            }
            auto *newNode = new Node<T>(item, previous->next);
            previous->next = newNode;
            this->size++;
        }
    }

    ~LinkedList() {
        auto current = head;
        while(current != nullptr){
            auto tmp = current;
            current = current->next;
            delete tmp;
        }
        size = 0;
    }
};
#endif //LAB4_LINKEDLIST_H