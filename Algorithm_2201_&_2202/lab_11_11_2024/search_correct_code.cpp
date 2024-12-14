#include <iostream>
#include <vector>
using namespace std;

// Linear search
int linearsearch(const vector<int> &t, int key) {
    int idx = -1;
    for (int i = 0; i < t.size(); i++) {
        if (t[i] == key) {
            idx = i;
            break;
        }
    }
    return idx;
}

// Binary search
int binarysearch(const vector<int> &t, int key) {
    int start = 0, finish = t.size() - 1;
    while (start <= finish) {
        int mid = (start + finish) / 2;
        if (t[mid] == key)
            return mid;
        if (key < t[mid])
            finish = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

// Ternary search
int ternarysearch(const vector<int> &t, int key) {
    int start = 0, finish = t.size() - 1;
    while (start <= finish) {
        int k = (finish - start) / 3;
        int mid1 = start + k, mid2 = finish - k;
        if (key == t[mid1]) return mid1;
        if (key == t[mid2]) return mid2;
        if (key < t[mid1]) finish = mid1 - 1;
        else if (key > t[mid2]) start = mid2 + 1;
        else {
            start = mid1 + 1;
            finish = mid2 - 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter elements: " << endl;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int key;
    cout << "\nEnter the element to search for: ";
    cin >> key;

    // int ans = linearsearch(v, key);
    // if (ans == -1) {
    //     cout << "Key not found in linear search.\n";
    // } else {
    //     cout << "Key found at index " << ans << " in linear search.\n";
    // }

//    int ans = binarysearch(v, key);
//     if (ans == -1) {
//         cout << "Key not found in binary search.\n";
//     } else {
//         cout << "Key found at index " << ans << " in binary search.\n";
//     }

    int ans = ternarysearch(v, key);
    if (ans == -1) {
        cout << "Key not found in ternary search.\n";
    } else {
        cout << "Key found at index " << ans << " in ternary search.\n";
    }

    return 0;
}
