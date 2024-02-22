#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Maximum size of the array

int arr[MAX_SIZE]; // Array to store numbers
int count = 0; // Variable to keep track of the number of elements in the array

void displayList() {
    if (count == 0) {
        cout << "The list is empty." << endl;
        return;
    }

    cout << "List of numbers:" << endl;
    for (int i = 0; i < count; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertNumber(int num) {
    if (count >= MAX_SIZE) {
        cout << "List is full. Cannot insert more numbers." << endl;
        return;
    }

    int i = count - 1;
    while (i >= 0 && arr[i] > num) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = num;
    count++;

    cout << num << " inserted successfully." << endl;
}

void deleteNumber(int num) {
    int foundIndex = -1;
    for (int i = 0; i < count; ++i) {
        if (arr[i] == num) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        for (int i = foundIndex; i < count - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        count--;
        cout << num << " deleted successfully." << endl;
    } else {
        cout << num << " not found in the list." << endl;
    }
}

// Implement search, update functions similarly

int main() {
    int choice, num, newValue;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Insert\n2. Delete\n3. Search\n4. Update\n5. Display\n6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter number to insert: ";
                cin >> num;
                insertNumber(num);
                break;
            case 2:
                cout << "Enter number to delete: ";
                cin >> num;
                deleteNumber(num);
                break;
            // Implement cases 3, 4 for Search and Update functions
            case 5:
                displayList();
                break;
            case 6:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != 6);

    return 0;
}
