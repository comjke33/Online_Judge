#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void) {
	vector<string> str_vec;

	str_vec.push_back("Never gonna give you up");
	str_vec.push_back("Never gonna let you down");
	str_vec.push_back("Never gonna run around and desert you");
	str_vec.push_back("Never gonna make you cry");
	str_vec.push_back("Never gonna say goodbye");
	str_vec.push_back("Never gonna tell a lie and hurt you");
	str_vec.push_back("Never gonna stop");

	int N;
	bool is_okay = true;
	string s;
	cin >> N;
	cin.ignore();
	for (int i = 0; i < N; i++) {
		getline(cin, s);
		bool is_find = false;
		for (int j = 0; j < 7; j++) {
			if (str_vec[j] == s) {
				is_find = true;
				break;
			}
		}
		if (is_find == false) {
			is_okay = false;
		}
	}

	if (is_okay == false) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	

	return 0;
}
