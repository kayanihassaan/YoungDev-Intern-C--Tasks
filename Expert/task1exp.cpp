#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList() : head(nullptr) {}

    void insert(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void deleteNode(int value)
    {
        if (head == nullptr)
        {
            cout << "List is empty, nothing to delete." << endl;
            return;
        }

        if (head->data == value)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node *temp = head;
        while (temp->next != nullptr && temp->next->data != value)
        {
            temp = temp->next;
        }

        if (temp->next == nullptr)
        {
            cout << "Value not found in the list." << endl;
        }
        else
        {
            Node *nodeToDelete = temp->next;
            temp->next = temp->next->next;
            delete nodeToDelete;
        }
    }

    void display() const
    {
        if (head == nullptr)
        {
        cout << "List is empty." << endl;
            return;
        }

        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }
};

int main()
{
    LinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);

    cout << "Linked list after inserting 10, 20, 30:" << endl;
    list.display();

    list.deleteNode(20);
    cout << "Linked list after deleting 20:" << endl;
    list.display();

    list.deleteNode(40);

    return 0;
}
