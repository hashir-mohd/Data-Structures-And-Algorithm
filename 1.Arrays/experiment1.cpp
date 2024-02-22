#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

// Function to convert a normal matrix to its sparse form
void ConvertToSparse(int normalMatrix[MAX_SIZE][MAX_SIZE], int rows, int cols, int sparseMatrix[][3]) {
    int nonZeroCount = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (normalMatrix[i][j] != 0) {
                sparseMatrix[nonZeroCount][0] = i;
                sparseMatrix[nonZeroCount][1] = j;
                sparseMatrix[nonZeroCount][2] = normalMatrix[i][j];
                nonZeroCount++;
            }
        }
    };
    cout << "\nSparse Matrix Representation:\n";
    for (int i = 0; i < nonZeroCount; ++i) {
        cout << sparseMatrix[i][0] << " " << sparseMatrix[i][1] << " " << sparseMatrix[i][2] << endl;
    }

    // Add the row at the top indicating the number of rows, columns, and non-zero elements
    // sparseMatrix[nonZeroCount][0] = rows;
    // sparseMatrix[nonZeroCount][1] = cols;
    // sparseMatrix[nonZeroCount][2] = nonZeroCount;
}

int main() {
    int rows, cols;

    // Input for the normal matrix
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int normalMatrix[MAX_SIZE][MAX_SIZE];

    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> normalMatrix[i][j];
        }
    }

    int sparseMatrix[MAX_SIZE][3];

    // Convert the normal matrix to its sparse form
    ConvertToSparse(normalMatrix, rows, cols, sparseMatrix);

    // Print the sparse matrix
    

    return 0;
}
