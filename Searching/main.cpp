#include <iostream>
#include <vector>
using namespace std;




void inputVector(vector<int> &v) ;
void printVector(const vector<int> &v);



int linearSearch(const vector<int> &v, int target) {
    for (int i = 0; i < v.size(); i++)
        if (v[i] == target) return i;
    return -1;
}

int binarySearch(const vector<int> &v, int target) {
    int left = 0, right = v.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (v[mid] == target) return mid;
        else if (v[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    inputVector(arr);

    int target;
    cin >> target;

    printVector(arr);

    if(linearSearch(arr, target) != -1)
        cout << "Linear Search: Element found at index " << linearSearch(arr, target) << "\n";
    else
        cout << "Linear Search: Element not found\n";

    if(binarySearch(arr, target) != -1)
        cout << "Binary Search: Element found at index " << binarySearch(arr, target) << "\n";
    else
        cout << "Binary Search: Element not found\n";

    return 0;
}


void printVector(const vector<int> &v) {
    for (const auto &x : v) cout << x << " ";
    cout << "\n";
}
void inputVector(vector<int> &v) {
    for (auto &x : v) cin >> x;
}