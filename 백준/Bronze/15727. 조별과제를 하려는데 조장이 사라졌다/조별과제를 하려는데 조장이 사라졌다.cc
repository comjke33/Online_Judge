#include <iostream>

using namespace std;

int main(void) {
	int L, count = 0;

	cin >> L;

	while (1) {
		if (L <= 0) {
			break;
		}
		for (int i = 5; i >= 1; i--) {
			if (L-i>=0) {
				L = L - i;
				count++;
				break;
			}
		}
	}
	cout << count;

	return 0;
}