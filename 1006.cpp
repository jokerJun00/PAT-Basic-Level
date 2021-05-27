#include <iostream>
using namespace std;

int main() {
    int input;
    cin >> input;

    int unit = input % 10;
    input /= 10;
    int ten = input % 10;
    input /= 10;
    int hundred = input;

    for (int i = 0; i < hundred; i++)
        cout << "B";
    for (int i = 0; i < ten; i++)
        cout << "S";
    for (int i = 1; i < unit + 1; i++)
        cout << i;

    return 0;
}