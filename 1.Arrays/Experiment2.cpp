#include <iostream>
using namespace std;

int binary_search(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        else if (arr[mid] < target)
            left = mid + 1;

        else
            right = mid - 1;
    }

    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = binary_search(arr, size, target);

    if (result != -1)
        cout << "Element " << target << " is present at index " << result << endl;
    else
        cout << "Element is not present in the array" << endl;

    return 0;
}
