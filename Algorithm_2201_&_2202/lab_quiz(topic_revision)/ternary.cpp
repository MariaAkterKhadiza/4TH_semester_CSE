
#include <iostream>
#include <vector>

using namespace std;

int linearSearch(const vector<int>& t, int key) {
    int idx = -1;
    for (int i=0; i<t.size(); i++) {
        if (t[i] == key) {
            idx = i;
            break;
        }
    }
    return idx;
}

int main() {
    vector<int> t = {1, 3, 5, 7, 9, 11}; // Initialize a sorted array

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int ans = linearSearch(t, key);

    if (ans == -1) {
        cout << "Key not found\n";
    } else {
        cout << "Key found at index " << ans << endl;
    }

    return 0;
}
