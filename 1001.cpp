#include <iostream>
using namespace std;

int main() {
    int input = 0, count = 0;
    cin >> input;

    while (input != 1) {
        if (input % 2 != 0) {
            input = 3 * input + 1;
        }
        input /= 2;
        count++;
    }
    cout << count << endl;

    return 0;
}







