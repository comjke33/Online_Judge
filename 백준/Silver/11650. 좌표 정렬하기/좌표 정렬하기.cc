#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int N;
	cin >> N;

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<pair<int, int>> m(N);

	for (int i = 0; i < N; i++) {
		cin >> m[i].first >> m[i].second;
	}

	sort(m.begin(), m.end());

	for (int i = 0; i < N; i++) {
		cout << m[i].first << " " << m[i].second << "\n";
	}

	return 0;
}