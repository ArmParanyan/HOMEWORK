#ifndef FORWARD_LIST_H
#define FORWARD_LIST_H
#include <ostream>

class List
{
public:
    List() : head {nullptr} {};
    List(const List& oth);
    List(List&& rhs);
    ~List();
public:
    List& operator=(List& oth);
    List& operator=(List&& rhs);
    List& operator+(List& oth);
    friend std::ostream& operator<<(std::ostream& os, List& oth)
    {
        Node* tmp = oth.head;
        while (tmp != nullptr)
        {
            os << tmp->value << " ";
            tmp = tmp->next;
        }
        return os;
    }
public:
    void insert(int ind, int val);
    void push_front(int val);
    void remove_at(int ind);
private:
    struct Node
    {
        int value;
        Node* next;
    } *head;
};

#endif //FORWARD_LIST_H