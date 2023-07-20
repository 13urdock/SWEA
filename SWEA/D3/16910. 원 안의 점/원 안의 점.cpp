#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	int test_case, T;
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N;
		cin >> N;
		int x = 0, y = 0;
		int dot = 0;
        
		// 1/4원 안에 있는 점 갯수 세기
		for (int i = 1; i <= N; i++) {		//x 좌표. 1부터 설정한 이유는.. 계산 편하려구
			for (int j = 0; j < N; j++) {	//y 좌표. N을 포함 안한 이유는 x = 0일때 제외하고 y = N인 점은 항상 원안에 들어가있지 않음
				if (sqrt(pow(i, 2.) + pow(j, 2.)) <= N) dot++; //x^2 + y^2의 제곱근 : 길이
			}
		}
		dot *= 4; dot++;//원 한 개 안에 있는 점의 갯수, 중앙에 있는 점 하나
		cout << "#" << test_case << " " << dot << endl;
	}
    
	return 0;
}