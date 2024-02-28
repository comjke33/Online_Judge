#include <iostream>

using namespace std;

int main(void) {
	int n, d=0, p=0;
	bool is_finished = false;
	cin >> n;

	char c;
	for (int i = 0; i < n; i++) {
		cin >> c;
		if (d > p + 1 || p > d + 1) {
			is_finished = true;
		}
		else if (c == 'D' && is_finished == false) {
			d++;
		}
		else if(c=='P' && is_finished == false){
			p++;
		}
	}

	cout << d << ":" << p;


	return 0;
}