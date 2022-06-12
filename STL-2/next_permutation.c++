#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 3, 2};

    /*
    Parameters:
        first, last : Bidirectional iterators to the initial
        and final positions of the sequence. The range
        used is [first, last), which contains all the elements
        between first and last, including the element pointed
        by first but not the element pointed by last.
    */
    next_permutation(arr, arr + 3); // using in-built function of C++

    cout << arr[0] << " " << arr[1] << " " << arr[2];

    return 0;
}