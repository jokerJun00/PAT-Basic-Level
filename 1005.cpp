#include <iostream>
#include <algorithm>

using namespace std;
bool cmp(int a, int b) { return a > b; }

int k;
int n[100];
bool is_key = true;

int main() {
	cin >> k;
	for (int i = 0; i < k; i++) { cin >> n[i]; }
	sort(n, n + k, cmp);

	for (int i = 0; i < k; i++) {
		if (n[i] != 0) {
			int m = n[i];
			while (m != 1) {
				if (m % 2 == 1)
					m = 3 * m + 1;
				m /= 2;

				for (int j = 0; j < k; j++) {
					if (n[j] == m) {
						n[j] = 0;
						break;
					}
				}
			}
		}
	}

	for (int i = 0; i < k; i++) {
		if (n[i] == 0)
			continue;
		if (is_key) {
			cout << n[i];
			is_key = false;
		}
		else
			cout << " " << n[i];
	}
	return 0;
}

