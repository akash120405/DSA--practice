#include <iostream>
using namespace std;

int main() {
    int oneD[12];
    int twoD[3][4];
    int index = 0;
    cout << "Enter 12 integers:\n";
    for (int i = 0; i < 12; i++) {
        cin >> oneD[i];
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            twoD[i][j] = oneD[index++];
        }
    }

    cout << "\n2D Array (3x4):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << twoD[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
