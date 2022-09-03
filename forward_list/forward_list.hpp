#ifndef FORWARD_LIST_HPP
#define FORWARD_LIST_HPP

#include "forward_list.h"

List::List(const List &oth)
{
    if (oth.head != nullptr)
    {
        Node *new_node = new Node();
        head = new_node;
        Node *prev = new_node;
        Node *tmp = oth.head;
        new_node->value = tmp->value;
        tmp = tmp->next;

        while (tmp != nullptr)
        {
            Node *tmp1 = new Node();
            tmp1->value = tmp->value;
            prev->next = tmp1;
            prev = prev->next;
            tmp = tmp->next;
        }
    }
}

List::List(List &&rhs)
{
    this->head = rhs.head;
    rhs.head = nullptr;
}

List::~List()
{
    if (head != nullptr)
    {
        Node *tmp;
        while (head)
        {
            tmp = head;
            head = head->next;
            delete tmp;
        }
        tmp = nullptr;
        head = nullptr;
    }
}

void List::push_front(int val)
{
    if (!head)
    {
        Node *tmp = new Node();
        tmp->value = val;
        tmp->next = nullptr;
        head = tmp;
        return;
    }
    Node *tmp = new Node();
    tmp->value = val;
    tmp->next = head;
    head = tmp;
}

void List::insert(int ind, int val)
{
    if (0 == ind)
    {
        Node *new_node = new Node();
        new_node->value = val;
        new_node->next = head;
        head = new_node;
        return;
    }
    int size = 0;
    Node *tmp = head;
    while (tmp->next)
    {
        ++size;
        tmp = tmp->next;
    }
    if (ind >= size - 1)
    {
        Node *new_node = new Node();
        new_node->value = val;
        tmp->next = new_node;
        new_node->next = nullptr;
        return;
    }

    Node *prev = head;
    for (int i = 0; i < ind - 1; ++i)
    {
        prev = prev->next;
    }

    Node *ind_node = head;
    for (int i = 0; i <= ind - 1; ++i)
    {
        ind_node = ind_node->next;
    }

    Node *new_node = new Node();
    new_node->value = val;
    prev->next = new_node;
    new_node->next = ind_node;
}

void List::remove_at(int ind)
{
    if (0 == ind)
    {
        Node *tmp = head;
        head = head->next;
        delete tmp;
        tmp = nullptr;
        return;
    }
    Node *tmp = head;
    for (int i = 0; i < ind - 1; ++i)
    {
        tmp = tmp->next;
    }
    Node *del = head;
    for (int i = 0; i <= ind - 1; ++i)
    {
        del = del->next;
    }
    if (del->next == nullptr)
    {
        delete del;
        del = nullptr;
        tmp->next = nullptr;
        return;
    }
    Node* nd = head;
    for (int i = 0; i < ind + 1; ++i)
    {
        nd = nd->next;
    }
    delete del;
    del = nullptr;
    tmp->next = nd;
}

List& List::operator=(List& oth)
{
    if (head == oth.head)
    {
        return  *this;
    }
    Node* new_node = new Node();
    head = new_node;
    Node* prev = new_node;
    Node* tmp = oth.head;
    new_node->value = tmp->value;
    tmp = tmp->next;
    while (tmp != nullptr)
    {
        Node* tmp1 = new Node();
        tmp1->value = tmp->value;
        prev->next = tmp1;
        prev = prev->next;
        tmp = tmp->next;
    }

    return *this;    
}

List& List::operator=(List&& rhs)
{
    if (head != nullptr)
    {
        Node* tmp;
        while (head)
        {
            tmp = head;
            head = head->next;
            delete tmp;
        }
        tmp = nullptr;
        head = nullptr;
    }
    head = rhs.head;
    rhs.head = nullptr;

    return *this;
}

List& List::operator+(List& oth)
{
    Node* tmp = head;
    while (tmp->next != nullptr)
    {
        tmp = tmp->next;
    }
    tmp->next = oth.head;
   
    return *this; 
}

#endif // FORWARD_LIST_HPP