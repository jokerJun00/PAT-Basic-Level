#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isPAT(string input);

int main() {
    int number;
    vector<string> inputs;
    cin >> number;

    for (int i = 0; i < number; i++) {
        string input;
        cin >> input;
        inputs.push_back(input);
    }

    bool flag = true;
    for (int i = 0; i < number; i++) {
        if (!flag)
            cout << "\n";
        if (isPAT(inputs[i]))
            cout << "YES";
        else
            cout << "NO";
        flag = false;
    }

    return 0;
}

bool isPAT(string input) {
    int P = 0, A = 0, T = 0;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == 'P')
            P++;
        else if (input[i] == 'A')
            A++;
        else if (input[i] == 'T')
            T++;
        else
            return false;
    }

    if (P != 1 || A < 1 || T != 1) {
        return false;
    }

    int p_position = input.find('P');
    int t_position = input.find('T');
    int a = 0, b = 0, c = 0;

    if (p_position > t_position)
        return false;

    for (int i = 0; i < input.length(); i++) {
        if (i < p_position && input[i] == 'A')
            a++;
        if (i > p_position && i < t_position && input[i] == 'A')
            b++;
        if (i > t_position && input[i] == 'A')
            c++;
    }

    if (b == 0)
        return false;

    if (c == a * b)
        return true;
    else
        return false;
}


