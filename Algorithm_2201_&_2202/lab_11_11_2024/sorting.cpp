
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
//selection sort
void selectionSort(vector<int>& t)
{
    for(int i=0; i<t.size();i++)
    {
        int min = i;
         for(int j=i+1; j<t.size();j++)
         {
            if(t[j] < t[min])
                min = j;
         }
         swap(t[i],t[min]);
    }
    cout<<"after sorting: ";
    for(int i=0; i<t.size();i++) cout<<t[i]<<" ";
    cout<<endl;
   
}
// bubble sort
void bubblesort(vector<int> & t)
{
     for(int k=0; k<t.size()-1;k++)
     {
        for(int i=0; i<t.size()-1; i++){
        if(t[i]>t[i+1])
         swap(t[i], t[i+1]);
       }
     }
    cout<<"after sorting: ";
    for(int i=0; i<t.size();i++) cout<<t[i]<<" ";
    cout<<endl;
    
}
// insertation sort
void insertationsort(vector<int> &t)
{
    for(int i=1; i<t.size(); i++)
    {
        int elem = t[i];
        int hole = i;
        while(hole>0 and  t[hole-1]>elem)
        {
            t[hole] = t[hole-1];
            hole = hole -1;
        }
        t[hole] = elem;

    }
    cout<<"after sorting: ";
    for(int i=0; i<t.size();i++) cout<<t[i]<<" ";
    cout<<endl;
}


int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> v(n);
    bubblesort(v);
    insertationsort(v);
    // cout << "Enter elements: " << endl;

    // for (int i = 0; i < n; i++) {
    //     cin >> v[i];
    // }

    // int key;
    // cout << "\nEnter the element to search for: ";
    // cin >> key;

 


    return 0;
}
