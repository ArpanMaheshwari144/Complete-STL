#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    // indexing is start from 0
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout << "Finding 6 -> " << binary_search(v.begin(), v.end(), 6) << endl;
    cout << "Lower bound -> " << lower_bound(v.begin(), v.end(), 3) - v.begin() << endl;
    cout << "Upper bound -> " << upper_bound(v.begin(), v.end(), 3) - v.begin() << endl;

    int a = 3;
    int b = 5;
    cout << "max -> " << max(a, b) << endl;
    cout << "min -> " << min(a, b) << endl;

    cout << "Before swap" << endl;
    cout << a << " " << b << endl;
    swap(a, b);
    cout << "After swap" << endl;
    cout << a << " " << b << endl;

    // (start position, how much rotate, end position)
    rotate(v.begin(), v.begin() + 2, v.end());
    cout << "After rotate" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    sort(v.begin(), v.end());
    cout << "\nAfter sorting" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    string str = "abcd";
    reverse(str.begin(), str.end());
    cout << str << endl;

    return 0;
}
