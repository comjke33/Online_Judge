#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

long long abs_f(long long a, long long b) {
	long long result = 0;
	if (a < b) {
		result = b - a;
	}
	else {
		result = a - b;
	}

	return result;
}
int main(void) {
	int n, t;
	long long a, b;
	long long start1, start2, end1, end2;
	long long result[10000] = { 0, };
	int idx = 0;

	scanf("%d", &n);
	scanf("%lld %lld %lld %lld", &start1, &start2, &end1, &end2);
	for (int i = 0; i < n; i++) {
		scanf("%d", &t);
		long long temp = 0;
		long long prev1 = start1, prev2 = start2;
		for (int j = 0; j < t; j++) {
			scanf("%lld %lld", &a, &b);
			temp = temp + abs_f(prev1, a) + abs_f(prev2, b);
			
			prev1 = a;
			prev2 = b;
		}
		temp = temp + abs_f(end1, prev1) + abs_f(end2, prev2);
		result[idx] = temp;
		idx++;
	}
	long long min = 1000000000000000007LL, real_result = 0;
	for (int i = 0; i < idx; i++) {
		if (min > result[i]) {
			real_result = i + 1;
			min = result[i];
		}
	}
	printf("%lld", real_result);
	return 0;
}

