#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, score, max_score = -1, min_score = 101;
    string name, ID, max_name, max_ID, min_name, min_ID;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name >> ID >> score;
        if (score > max_score) {
            max_score = score;
            max_name = name;
            max_ID = ID;
        }

        if (score < min_score) {
            min_score = score;
            min_name = name;
            min_ID = ID;
        }
    }

    cout << max_name << " " << max_ID << endl;
    cout << min_name << " " << min_ID << endl;


    return 0;
}



