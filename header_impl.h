#include <iostream>
#include "header.h"

using namespace std;

template<typename Item_Type> //Each one of these creates an template of Item_type
typename Single_Linked_List<Item_Type>::push_front(const Item_Type& item) {
    list.insert(list.begin(), item); //Puts the value of Item_Type into the begining of the list.
}

template<typename Item_Type>
void Single_Linked_List<Item_Type>::push_back(const Item_Type& item) {
    list.push_back(item);//Just uses push_back to put the value at the end of the list
}

template<typename Item_Type>
void Single_Linked_List<Item_Type>::pop_front() {
    if (!empty()) list.erase(list.begin()); //Basically, unless the list is empty, erase the value at the begining of the list
}

template<typename Item_Type>
void Single_Linked_List<Item_Type>::pop_back() {
    if (!empty()) list.pop_back();//Removing the item at the end of the list if its not empty
}

template<typename Item_Type>
Item_Type Single_Linked_List<Item_Type>::front() const {
    return list.front(); //returns the value at the front of the list
}

template<typename Item_Type>
Item_Type Single_Linked_List<Item_Type>::back() const {
    return list.back();//returns the value at the end of the list
}

template<typename Item_Type>
bool Single_Linked_List<Item_Type>::empty() const {
    return list.empty(); //returns an emptyied list
}

template<typename Item_Type>
void Single_Linked_List<Item_Type>::insert(size_t index, const Item_Type& item) {
    if (index >= list.size()) { //If the index given is greater then the last index in the list
        push_back(item); //add the item to the end of the list
    }
    else {
        list.insert(list.begin() + index, item); //Otherwise insert it at the index given
    }
}

//This function removes the value at the index given
template<typename Item_Type>
bool Single_Linked_List<Item_Type>::remove(size_t index) {
    if (index < list.size()) {
        list.erase(list.begin() + index);
        return true;
    }
    return false;
}

template<typename Item_Type>//This function finds and returns the value at a given index
size_t Single_Linked_List<Item_Type>::find(const Item_Type& item) const {
    for (size_t i = 0; i < list.size(); ++i) {
        if (list[i] == item) return i;
    }
    return list.size();
}

template<typename Item_Type>//This function will return the size of the list
size_t Single_Linked_List<Item_Type>::size() const {
    return list.size();
}

void Stack::push(int value) {
    stack.push_back(value);//Adds a value to the stack
}

void Stack::pop() {
    if (!empty()) stack.pop_back();//Removes the item from the back of the stack
}

bool Stack::empty() const {
    return stack.empty();//bool that returns if the stack is empty or not
}

int Stack::top() const {
    return stack.back();//Returns the top most item in the stack
}

//Returns the average value of all the items in the stack
double Stack::average() const {
    int sum = 0;
    for (int value : stack) sum += value;
    return static_cast<double>(sum) / stack.size();
}