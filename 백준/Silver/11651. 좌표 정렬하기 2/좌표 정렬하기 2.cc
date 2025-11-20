#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


bool compare(const pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}

	return a.second < b.second;
}

int main(){
	int N;
	cin >> N;

	vector<pair<int, int>> m(N);

	for (int i = 0; i < N; i++) {
		cin >> m[i].first >> m[i].second;
	}

	sort(m.begin(), m.end(), compare);

	for (int i = 0; i < N; i++) {
		cout << m[i].first << " " << m[i].second << "\n";
	}

	return 0;
}