#include <iostream>
using namespace std;

int seqSearch(const int arr[], int key) {
    for (int i = 0; i < 10; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int numbers[10] = {12, -7, 3, 17, 42, 6, 18, -15, 0, 1};
    int searchNum;

    cout << "Enter a number to search for: ";
    cin >> searchNum;

    int result = seqSearch(numbers, searchNum);

    if (result != -1) {
        cout << searchNum << " was found in array slot " << result << "." << endl;
    }
    else {
        cout << searchNum << " was found in array slot: "<<result << endl;
    }

    return 0;
}
