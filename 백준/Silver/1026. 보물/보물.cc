#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int n;
	vector<int> v1;
	vector<int> v2;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int s;
		cin >> s;
		v1.push_back(s);
		sort(v1.begin(), v1.end());
	}
	for (int i = 0; i < n; i++) {
		int s;
		cin >> s;
		v2.push_back(s);
		sort(v2.begin(), v2.end(), greater<>());
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans = ans + v1[i] * v2[i];
	}
	cout << ans;


}