#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	long long n, m;
	vector<long long> ans;
	for (int i = 0; i < t; i++) {
		long long count = 0;
		cin >> n >> m;
		while (1) {
			if (n == 0) {
				break;
			}
			count++;
			n = n / 2;
		}
		cout << count+m<<"\n";
		//ans.push_back(count);
	}
	//for (int i = 0; i < t; i++) {
	//	cout << ans[i] << "\n";
	//}
}