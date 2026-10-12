#include <iostream>
using namespace std;

int main() {
    int array[5];

    for (int i = 0; i < 5; i++) {
        cin >> array[i];
    }

    int max = array[0];

    for (int i = 0; i < 5; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    cout << "Maximum = " << max << endl;

    return 0;
}