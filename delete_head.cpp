#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << "Insert at Tail" << endl
             << endl;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void print_list_of_linked_list(Node *head)
{
    cout << endl;
    cout << "Check Linked List: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}

void insert_any_position(Node *head, int position, int value)
{
    Node *newNode = new Node(value);
    Node *tmp = head;
    for (int i = 1; i < position - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl
         << endl
         << "Inserted at Position: " << position << endl
         << endl;
}

void insert_head(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "Inserted at head: " << endl
         << endl;
}

void delete_node_from_position(Node *head, int position)
{
    Node *tmp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout << endl
         << "Deleted Position " << position << endl;
}

void delete_head_node(Node* &head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << endl
         << "Deleted Head " << &head << endl;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert a Tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Insert at Any Position" << endl;
        cout << "Option 4: Insert at Head" << endl;
        cout << "Option 5: Delete from position" << endl;
        cout << "Option 6: Delete Head" << endl;
        cout << "Option 7: Terminate Linked list" << endl;
        int option;
        cin >> option;
        if (option == 1)
        {
            cout << "please enter value: ";
            int v;
            cin >> v;
            insert_tail(head, v);
        }
        else if (option == 2)
        {
            print_list_of_linked_list(head);
        }
        else if (option == 3)
        {
            int position, value;
            cout << "Enter position: ";
            cin >> position;
            cout << "Enter value: ";
            cin >> value;
            if (position == 0)
            {
                insert_head(head, value);
            }
            else
            {
                insert_any_position(head, position, value);
            }
        }
        else if (option == 4)
        {
            int value;
            cout << "Enter value: ";
            cin >> value;
            insert_head(head, value);
        }
        else if (option == 5)
        {
            int position;
            cout << "Enter position: ";
            cin >> position;
            if (position == 0)
            {
                delete_head_node(head);
            }
            else
            {
                delete_node_from_position(head, position);
            }
        }
        else if (option == 6)
        {
            delete_head_node(head);
        }
        else if (option == 7)
        {
            break;
        }
    }
    // print_list_of_linked_list(head);
    return 0;
}