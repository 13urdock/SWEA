#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	int N, T; 	//N: 삼각형의 크기(몇 줄), T: 테스트 케이스의 개수
	cin >> T;

	for (int k = 1; k <= T; k++) {	//T번 반복
		cin >> N;
		cout << "#" << k << endl;

		//삼각형 입력
		for (int i = 0; i < N; i++) {		//N줄 반복
			for (int j = 0; j <= i; j++) {		//i번째 줄의 숫자 입력
				cout << tgamma(i+1) / (tgamma(i - j+1) * tgamma(j+1))<< " "; //combination formula: nCr = n!/(n-r)!* r!
			}
			cout << endl;
		}
	}
	return 0;
}