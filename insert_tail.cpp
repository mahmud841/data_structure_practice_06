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
    cout << "My Linked List: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout<<endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert a Tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Terminate Linked list" << endl;
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
            break;
        }
    }
    // print_list_of_linked_list(head);
    return 0;
}