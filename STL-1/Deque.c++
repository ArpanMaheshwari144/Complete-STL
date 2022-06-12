#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    // d.pop_front(); // popped the front element
    // d.pop_back(); // popped the last element

    cout << "Print first index element -> " << d.at(1) << endl;

    cout << "front " << d.front() << endl;
    cout << "back " << d.back() << endl;

    cout << "Empty or not" << d.empty() << endl;

    cout << "Before erase" << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "After erase" << d.size() << endl;
    for (int i : d)
    {
        cout << i << endl;
    }

    return 0;
}
