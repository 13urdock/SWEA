#include <iostream>
using namespace std;

int main(void) {
	int test_case;
	int T;
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case) {
		int N;
		cin >> N;
		int result = 0;

		for (int i = 1; i <= N; i++) {
			if (i % 2 == 0) result -= i;//짝수일 경우 빼기
			else result += i;			//홀수일 경우 더하기
		}
		cout << "#" << N << " " << result << endl;
	}
	return 0;
}