#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <vector>
#include "header_impl.h"

using namespace std;
template<typename Item_Type>

//Class single_linked_list defining all functions
class Single_Linked_List {
private:
    vector<Item_Type> list;

public:
    void push_front(const Item_Type& item);
    void push_back(const Item_Type& item);
    void pop_front();
    void pop_back();
    Item_Type front() const;
    Item_Type back() const;
    bool empty() const;
    void insert(size_t index, const Item_Type& item);
    bool remove(size_t index);
    size_t find(const Item_Type& item) const;
    size_t size() const;
};

class Stack {
private:
    vector<int> stack;

public:
    void push(int value);
    void pop();
    bool empty() const;
    int top() const;
    double average() const;
};


#endif