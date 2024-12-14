#include <iostream>
#include <vector>

using namespace std;

int binarySearch(const vector<int>& t, int key) {
    int start = 0, finish = t.size() - 1;

    while (start <= finish) {
        int mid = start + (finish - start) / 2; // Prevent overflow

        if (t[mid] == key) {
            return mid; // Key found, return index
        }

        if (key < t[mid]) {
            finish = mid - 1; // Search in the left half
        } else {
            start = mid + 1; // Search in the right half
        }
    }

    return -1; // Key not found
}

int main() {
    vector<int> t = {1, 3, 5, 7, 9, 11}; // Initialize a sorted array

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int ans = binarySearch(t, key);

    if (ans == -1) {
        cout << "Key not found\n";
    } else {
        cout << "Key found at index " << ans << endl;
    }

    return 0;
}
