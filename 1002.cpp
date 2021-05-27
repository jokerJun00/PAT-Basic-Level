#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	string string_number;
	stack<int> numbers;
	int sum = 0;
	bool flag = true;

	cin >> string_number;

	for (int i = 0; i < string_number.length(); i++) {
		sum = sum + (string_number[i] - '0');
	}

	while (sum) {
		int current_number = sum % 10;
		sum /= 10;
		numbers.push(current_number);
	}

	while (!numbers.empty()) {
		if (!flag) {
			cout << " ";
		}

		switch (numbers.top()) {
		case 0: cout << "ling";
			break;
		case 1: cout << "yi";
			break;
		case 2: cout << "er";
			break;
		case 3: cout << "san";
			break;
		case 4: cout << "si";
			break;
		case 5: cout << "wu";
			break;
		case 6: cout << "liu";
			break;
		case 7: cout << "qi";
			break;
		case 8: cout << "ba";
			break;
		case 9: cout << "jiu";
			break;
		}
		numbers.pop();
		flag = false;
	}
	return 0;
}

