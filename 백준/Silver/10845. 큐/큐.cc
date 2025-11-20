#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

	int N;
	cin >> N;

	string input_str;
	int input_data;

	vector<int> stack;
	vector<int> output_data;
	for (int i = 0; i < N; i++) {
		cin >> input_str;
		if (input_str.compare("push") == 0) {
			cin >> input_data;
			stack.push_back(input_data);
		}

		else if (input_str.compare("pop") == 0) {
			if (stack.size() == 0) {
				output_data.push_back(-1);
				continue;
			}
			int data = stack.front();
			output_data.push_back(data);
			stack.erase(stack.begin());
		}

		else if (input_str.compare("size") == 0) {
			output_data.push_back(stack.size());
		}

		else if (input_str.compare("empty") == 0) {
			if (stack.size() == 0) {
				output_data.push_back(1);
			}
			else {
				output_data.push_back(0);
			}
		}

		else if (input_str.compare("front") == 0) {
			if (stack.size() == 0) {
				output_data.push_back(-1);
				continue;
			}
			int data = stack.front();
			output_data.push_back(data);
		}	

		else if (input_str.compare("back") == 0) {
			if (stack.size() == 0) {
				output_data.push_back(-1);
				continue;
			}
			int data = stack.back();
			output_data.push_back(data);
		}
	}

	for (int i = 0; i < output_data.size(); i++) {
		cout << output_data.at(i) << "\n";
	}

	return 0;
}