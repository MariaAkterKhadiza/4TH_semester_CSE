#include<bits/stdc++.h>
using namespace std;

struct Result {
    int minn;
    int maxx;
};

Result findMinMax (const vector<int>& arr, int start, int finish) {
    if (start == finish) { // when 1 element
        Result r1;
        r1.minn = arr[start];
        r1.maxx = arr[start];
        return r1;
    }

    else if (finish == start+1) { // when 2 elements
        Result r2;
        (arr[start]>=arr[finish]) ?
        r2.maxx = arr[start] : r2.maxx = arr[finish];
        (arr[start]<arr[finish]) ?
        r2.minn = arr[start] : r2.minn = arr[finish];
        return r2;
    }
    else { // more than two elements
        int mid = (start+finish)/2;
        Result leftResult = findMinMax(arr, start, mid);
        Result rightResult = findMinMax(arr, mid+1, finish);
        Result r3;
        (leftResult.minn < rightResult.minn) ?
        r3.minn = leftResult.minn : r3.minn = rightResult.minn;
        (leftResult.maxx > rightResult.maxx) ?
        r3.maxx = leftResult.maxx : r3.maxx = rightResult.maxx;
        return r3;
    }

}

int main() {
    vector<int> arr;

    int n;
    cout << "Enter no. of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    while (n--) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    Result ultimate = findMinMax(arr, 0, arr.size()-1);

    cout << "Min Value: " << ultimate.minn << endl
    << "Max Value: " << ultimate.maxx << endl;

    return 0;
}
