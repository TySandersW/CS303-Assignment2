#include "header.h"
#include "header_impl.h"
using namespace std;

int main() {
    Single_Linked_List<int> list;
    list.push_back(10);
    list.push_front(5);
    list.insert(1, 7);
    list.push_back(12);

    cout << "Front: " << list.front() << "\n";
    cout << "Back: " << list.back() << "\n";
    cout << "Size: " << list.size() << "\n";
    list.remove(1);
    cout << "After removing index 1, size: " << list.size() << "\n";

    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack top: " << s.top() << "\n";
    cout << "Average value: " << s.average() << "\n";

    s.pop();
    cout << "Stack top after pop: " << s.top() << "\n";

    return 0;
}