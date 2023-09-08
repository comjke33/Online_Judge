#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int n, m, a, sum = 0;
	vector<int> v;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {

		cin >> a;
		sum = sum + a;
		v.push_back(sum);
	}
	vector<int> answer;
	for (int i = 0; i < m; i++) {
		int first, second;
		cin >> first >> second;
		int ans = v[second - 1];
		if (first != 1) {
			ans = ans - v[first - 2];
		}
		answer.push_back(ans);
	}
	for (int i = 0; i < m; i++) {
		cout << answer[i] << "\n";
	}

	return 0;
}